/* Firmware entry: 0x4818d2ac */

int FUN_ram_4818d2ac(undefined4 param_1,undefined4 param_2,undefined2 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_48139392(0x1c);
  if (iVar1 == 0) {
    return 0;
  }
  *(code **)(iVar1 + 0x10) = FUN_ram_4818d290;
  *(undefined4 *)(iVar1 + 0x14) = param_1;
  *(undefined4 *)(iVar1 + 0x18) = param_4;
  iVar2 = FUN_ram_4813aa74(0,param_3,0x41,iVar1,param_2);
  if (iVar2 == 0) {
    FUN_ram_481393fc(iVar1);
  }
  return iVar2;
}


