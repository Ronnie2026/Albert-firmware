/* Firmware entry: 0x48173028 */

int FUN_ram_48173028(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_28 [12];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = param_2 + 0x10;
  iVar2 = FUN_ram_481802e8(iVar1,0);
  if (iVar2 == 0) {
    return 0;
  }
  FUN_ram_4817fb86(auStack_28);
  iVar2 = FUN_ram_48180ec2(0,auStack_28,iVar1,param_1 + 4);
  if (iVar2 == 0) {
    iVar3 = param_2 + 8;
    iVar2 = FUN_ram_4817bf84(iVar3,iVar3,auStack_28);
    if ((iVar2 == 0) && (iVar2 = FUN_ram_48172ae2(iVar3,param_1), iVar2 == 0)) {
      DAT_ram_4ff6e290 = DAT_ram_4ff6e290 + 1;
      iVar2 = FUN_ram_4817bf84(auStack_28,auStack_28);
      if ((iVar2 == 0) && (iVar2 = FUN_ram_48172ae2(auStack_28,param_1), iVar2 == 0)) {
        DAT_ram_4ff6e290 = DAT_ram_4ff6e290 + 1;
        iVar2 = FUN_ram_4817bf84(param_2,param_2,auStack_28);
        if ((iVar2 == 0) && (iVar2 = FUN_ram_48172ae2(param_2,param_1), iVar2 == 0)) {
          DAT_ram_4ff6e290 = DAT_ram_4ff6e290 + 1;
          iVar2 = FUN_ram_4817bf84(iVar3,iVar3,auStack_28);
          if ((iVar2 == 0) && (iVar2 = FUN_ram_48172ae2(iVar3,param_1), iVar2 == 0)) {
            DAT_ram_4ff6e290 = DAT_ram_4ff6e290 + 1;
            iVar2 = FUN_ram_4817ff24(iVar1);
            goto LAB_ram_48173086;
          }
        }
      }
      FUN_ram_4817fb90(auStack_28);
      return iVar2;
    }
  }
LAB_ram_48173086:
  FUN_ram_4817fb90(auStack_28);
  return iVar2;
}


