native helperBase = 40

function helperValue(extra)
	if extra == not
		extra = 2
	end
	return helperBase + extra
end

return helperValue()
