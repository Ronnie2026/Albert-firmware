/* Firmware entry: 0x48172b94 */

int FUN_ram_48172b94(int param_1,int param_2,byte param_3)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_28 [20];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  param_2 = param_2 + 8;
  FUN_ram_4817fb86(auStack_28);
  iVar1 = FUN_ram_481802e8(param_2,0);
  iVar2 = FUN_ram_48180594(auStack_28,param_1 + 4,param_2);
  if (iVar2 == 0) {
    iVar2 = FUN_ram_4817fc26(param_2,auStack_28,param_3 & iVar1 != 0);
  }
  FUN_ram_4817fb90(auStack_28);
  return iVar2;
}


