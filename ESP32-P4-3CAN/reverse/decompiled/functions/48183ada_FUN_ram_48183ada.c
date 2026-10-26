/* Firmware entry: 0x48183ada */

int FUN_ram_48183ada(int param_1,undefined1 param_2,undefined1 *param_3,uint param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 uStack_64;
  undefined1 uStack_63;
  undefined1 auStack_60 [64];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_4 < 0x41) {
    puVar3 = param_3;
    uStack_63 = (char)param_4;
  }
  else {
    uVar1 = FUN_ram_4817697e(0xb);
    puVar3 = auStack_60;
    iVar2 = FUN_ram_48176cf2(uVar1,param_3,param_4,puVar3);
    if (iVar2 != 0) goto LAB_ram_48183b40;
    param_4 = 0x40;
    uStack_63 = 0x40;
  }
  uStack_64 = param_2;
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar1 = FUN_ram_4817697e(0xb);
    iVar2 = FUN_ram_48176b18(param_1,uVar1,0);
    if ((iVar2 != 0) || (iVar2 = FUN_ram_48176bfe(param_1), iVar2 != 0)) goto LAB_ram_48183b40;
    *(undefined4 *)(param_1 + 0xc) = 1;
  }
  iVar2 = FUN_ram_48176c62(param_1,&uStack_64,2);
  if (iVar2 == 0) {
    iVar2 = FUN_ram_48176c62(param_1,puVar3,param_4);
  }
LAB_ram_48183b40:
  FUN_ram_48178af2(auStack_60,0x40);
  return iVar2;
}


