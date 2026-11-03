local M = {}

M.name = "lua-demo-module"
M.message = "Permafrost Lua sample OK"

function M.add(a, b)
	return a + b
end

return M
