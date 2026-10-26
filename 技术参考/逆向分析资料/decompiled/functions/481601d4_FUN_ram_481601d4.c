/* Firmware entry: 0x481601d4 */

int FUN_ram_481601d4(undefined4 param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uStack_5c;
  int iStack_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_34 = 0x1030;
  uStack_5c = 5;
  iVar1 = 100;
  iStack_58 = param_2;
  while( true ) {
    iVar2 = FUN_ram_4816272a(param_1,&uStack_5c);
    if (iVar2 != 0) {
      return iVar2;
    }
    if ((iStack_54 < 0) || (param_2 == 0)) break;
    iVar1 = iVar1 + -1;
    FUN_ram_4ff3c2b6(10);
    if (iVar1 == 0) {
      return 0x107;
    }
  }
  if (param_3 == (int *)0x0) {
    gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
    return 0;
  }
  *param_3 = iStack_54;
  return 0;
}


