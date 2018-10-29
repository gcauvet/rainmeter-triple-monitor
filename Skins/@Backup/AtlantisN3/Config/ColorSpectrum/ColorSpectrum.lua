function Initialize()
	-- GET SPECTRUM POSITION AND DIMENSIONS.
	local Spectrum = SKIN:GetMeter('Spectrum')

	Image = {
		X = Spectrum:GetX(),
		Y = Spectrum:GetY(),
		W = Spectrum:GetW(),
		H = Spectrum:GetH(),
		}
end

function GetRGB(MouseX, MouseY)
	MouseX, MouseY = tonumber(MouseX), tonumber(MouseY)

	-- GET "TRUE" X/Y AS PERCENTUAL VALUES.
	local X = tonumber(MouseX) / (Image.W - 1)
	local Y = tonumber(MouseY) / (Image.H - 1)

	-- DETERMINE COLOR BASED ON MOUSE POSITION.
	local Colors = {}
	Colors.RGB  = {
		Red   = ColorCurve(X, Y, 0),
		Green = ColorCurve(X, Y, 1/3),
		Blue  = ColorCurve(X, Y, 2/3)
		}
	Colors.RGB.Full = ('%d,%d,%d'):format(Colors.RGB.Red, Colors.RGB.Green, Colors.RGB.Blue)

	-- CONVERT RGB COLORS (0-255) TO HEXADECIMAL (00-FF).
	Colors.HEX = {
		Red   = string.format('%02X', Colors.RGB.Red),
		Green = string.format('%02X', Colors.RGB.Green),
		Blue  = string.format('%02X', Colors.RGB.Blue)
		}
	Colors.HEX.Full = ('%s%s%s'):format(Colors.HEX.Red, Colors.HEX.Green, Colors.HEX.Blue)

	-- UPDATE METERS WITH NEW INFORMATION.
	for _, t in pairs {
		{ Meter = 'SelectedColor', Option = 'SolidColor',        Value = Colors.HEX.Full  },
		{ Meter = 'RGB_Red',       Option = 'Text',              Value = Colors.RGB.Red   },
		{ Meter = 'RGB_Green',     Option = 'Text',              Value = Colors.RGB.Green },
		{ Meter = 'RGB_Blue',      Option = 'Text',              Value = Colors.RGB.Blue  },
		{ Meter = 'Col1',      Option = 'LeftMouseUpAction', Value = ('[!WriteKeyValue "Variables" "FBB" "%s" "#@#Style.inc"]#MTAJR1#[!Refreshgroup UP]'):format(Colors.RGB.Full) },
		{ Meter = 'Col2',      Option = 'LeftMouseUpAction',       Value = ('[!WriteKeyValue "Variables" "DA1" "%s" "#@#Style.inc"]#MTAJR1#[!Refreshgroup UP]'):format(Colors.RGB.Full) },
		{ Meter = 'Col3',      Option = 'LeftMouseUpAction', Value = ('[!WriteKeyValue "Variables" "FBC" "%s" "#@#Style.inc"]#MTAJR1#[!Refreshgroup UP]'):format(Colors.RGB.Full) },
		{ Meter = 'Col4',      Option = 'LeftMouseUpAction',       Value = ('[!WriteKeyValue "Variables" "FBP" "%s" "#@#Style.inc"]#MTAJR1#[!Refreshgroup UP]'):format(Colors.RGB.Full) },
		{ Meter = 'Crosshair',     Option = 'Text',              Value = '+' },
		{ Meter = 'Crosshair',     Option = 'X',                 Value = Image.X + MouseX + 2},
		{ Meter = 'Crosshair',     Option = 'Y',                 Value = Image.Y + MouseY + 2},
	} do
		SKIN:Bang('!SetOption',   t.Meter, t.Option, t.Value)
		SKIN:Bang('!UpdateMeter', t.Meter)
	end
	SKIN:Bang('!WriteKeyValue', 'Variables', 'MyColor', ('%s'):format(Colors.RGB.Full), '#SkinsPath##RootConfig#/@Resources/Style.inc')
	SKIN:Bang('!Refresh', '#RootConfig#')
	SKIN:Bang('!Redraw')
end

function ColorCurve(X, Y, Apex)
	-- ALIGN CURVE APEX TO ORIGIN.
	X = X - Apex

	-- COLLAPSE MODULAR DIFFERENCE.
	while math.abs(X) > 1/2 do
		X = X - X / math.abs(X)
	end

	-- MATCH HORIZONTAL POINT TO CURVE; APPLY FLOOR AND CEILING.
	local Value = 510 - 510 * 3 * math.abs(X)
	Value = math.min(math.max(Value, 0), 255)
	
	-- ADJUST FOR BRIGHTNESS (VERTICAL POINT).
	if Y > 1/2 then
		Value = Value - Value * (2 * (Y - 1/2))
	elseif Y < 1/2 then
		Value = Value + (255 - Value) * (1 - (2*Y))
	end

	-- ROUND AND RETURN.
	return math.floor(Value + 0.5)
end