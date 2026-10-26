/* Firmware entry: 0x481571d2 */

undefined4 FUN_ram_481571d2(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uStack_24;
  undefined4 uStack_20;
  code *pcStack_1c;
  int iStack_18;
  undefined4 uStack_14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 != 0) {
    iVar3 = *(int *)(iVar1 + 8);
    uVar2 = *(undefined4 *)(iVar1 + 0x10);
    FUN_ram_4813985e(uVar2,iVar3,iVar3 + 4,iVar3 + 8);
    FUN_ram_48139d84(uVar2);
    FUN_ram_48139f8a(uVar2);
    if (((*(uint *)(iVar1 + 0x54) & 1) == 0) || (*(int *)(iVar1 + 0x3c) == 2)) {
      uStack_24 = 0;
      uStack_20 = 0;
      pcStack_1c = FUN_ram_48157b16;
      uStack_14 = 1;
      iStack_18 = iVar1;
      iVar1 = FUN_ram_4814e864(0);
      if (iVar1 == 0) {
        FUN_ram_4814e408(&DAT_ram_4ff6e254,0);
        FUN_ram_481378ce(&LAB_ram_48156898,&uStack_24,&DAT_ram_4ff6e258);
        FUN_ram_4814e3a4(&DAT_ram_4ff6e254);
      }
      else {
        (*pcStack_1c)(&uStack_24);
      }
    }
    return 0;
  }
  return 0x103;
}


