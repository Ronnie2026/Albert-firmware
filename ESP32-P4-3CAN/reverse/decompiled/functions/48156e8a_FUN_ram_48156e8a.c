/* Firmware entry: 0x48156e8a */

undefined4 FUN_ram_48156e8a(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = *(int *)(param_1 + 0xc);
  uVar2 = **(uint **)(param_1 + 0x10);
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  FUN_ram_4ff45158(&uStack_28,(*(uint **)(param_1 + 0x10))[1],0x18);
  if ((iVar1 == 0) || ((*(uint *)(iVar1 + 0x54) & 2) == 0)) {
    FUN_ram_48138d9c(uVar2 & 0xff,&uStack_28);
  }
  else {
    if (1 < uVar2) {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return 0x5001;
    }
    FUN_ram_4818ce3e(*(undefined4 *)(iVar1 + 0x24),&uStack_28,uVar2);
  }
  return 0;
}


