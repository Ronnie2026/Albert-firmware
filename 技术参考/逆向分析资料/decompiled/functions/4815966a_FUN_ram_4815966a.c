/* Firmware entry: 0x4815966a */

undefined4
FUN_ram_4815966a(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  code *pcStack_1c;
  int iStack_18;
  undefined4 *puStack_14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_1 != 0) && (*(int *)(param_1 + 0x24) != 0)) {
    puStack_14 = &uStack_34;
    uStack_24 = 0;
    uStack_20 = 0;
    pcStack_1c = FUN_ram_4815780e;
    uStack_34 = param_2;
    uStack_30 = param_3;
    uStack_2c = param_4;
    uStack_28 = param_5;
    iStack_18 = param_1;
    iVar1 = FUN_ram_4814e864(0);
    if (iVar1 != 0) {
      uVar2 = (*pcStack_1c)(&uStack_24);
      return uVar2;
    }
    FUN_ram_4814e408(&DAT_ram_4ff6e254,0);
    FUN_ram_481378ce(&LAB_ram_48156898,&uStack_24,&DAT_ram_4ff6e258);
    FUN_ram_4814e3a4(&DAT_ram_4ff6e254);
    return uStack_20;
  }
  return 0x5002;
}


