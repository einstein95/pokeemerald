SootopolisCity_Gym_B1F_MapBorder::
	.incbin "data/layouts/SootopolisCity_Gym_B1F/border.bin"

SootopolisCity_Gym_B1F_MapBlockdata::
	.incbin "data/layouts/SootopolisCity_Gym_B1F/map.bin"

	.align 2
SootopolisCity_Gym_B1F_Layout::
	.4byte 0x11
	.4byte 0x1a
	.4byte SootopolisCity_Gym_B1F_MapBorder
	.4byte SootopolisCity_Gym_B1F_MapBlockdata
	.4byte gTileset_Building
	.4byte gTileset_SootopolisGym

