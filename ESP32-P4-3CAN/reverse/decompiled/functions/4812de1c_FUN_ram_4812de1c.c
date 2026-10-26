/* Firmware entry: 0x4812de1c */

uint FUN_ram_4812de1c(uint param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar1 = thunk_FUN_ram_4ff20684();
  uVar2 = uVar1;
  if ((((uVar1 != 0) && (param_2 != 0)) && (1 < param_2 - 2U)) &&
     (((uVar2 = param_1, param_2 == 1 && (uVar2 = uVar1, param_3 != 0)) && (param_3 != 0x90)))) {
    uVar2 = param_1 | param_3 == 4;
  }
  return uVar2;
}


