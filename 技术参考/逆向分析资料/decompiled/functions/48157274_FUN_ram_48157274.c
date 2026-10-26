/* Firmware entry: 0x48157274 */

undefined4 FUN_ram_48157274(int param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uStack_24;
  undefined4 uStack_20;
  code *pcStack_1c;
  int iStack_18;
  undefined4 uStack_14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = *(int *)(param_1 + 0xc);
  FUN_ram_48156784(iVar1);
  iVar2 = FUN_ram_48156802();
  if (iVar2 == 0) {
    FUN_ram_4813a918(&DAT_ram_4ff6e25c);
    DAT_ram_4ff6e25c = 0;
  }
  thunk_FUN_ram_4ff209c6(*(undefined4 *)(iVar1 + 8));
  thunk_FUN_ram_4ff209c6(*(undefined4 *)(iVar1 + 0xc));
  thunk_FUN_ram_4ff209c6(*(undefined4 *)(iVar1 + 0x5c));
  thunk_FUN_ram_4ff209c6(*(undefined4 *)(iVar1 + 0x60));
  FUN_ram_48156f80(iVar1);
  pcVar3 = *(char **)(iVar1 + 0x20);
  if (((pcVar3 != (char *)0x0) && (*pcVar3 != '\0')) && (*(int *)(pcVar3 + 4) == 1)) {
    FUN_ram_48159cfa();
  }
  thunk_FUN_ram_4ff209c6(*(undefined4 *)(iVar1 + 0x10));
  thunk_FUN_ram_4ff209c6(*(undefined4 *)(iVar1 + 0x58));
  uStack_24 = 0;
  uStack_20 = 0;
  pcStack_1c = FUN_ram_48157b16;
  uStack_14 = 3;
  iStack_18 = iVar1;
  iVar2 = FUN_ram_4814e864(0);
  if (iVar2 == 0) {
    FUN_ram_4814e408(&DAT_ram_4ff6e254,0);
    FUN_ram_481378ce(&LAB_ram_48156898,&uStack_24,&DAT_ram_4ff6e258);
    FUN_ram_4814e3a4(&DAT_ram_4ff6e254);
  }
  else {
    (*pcStack_1c)(&uStack_24);
  }
  FUN_ram_4818ca38(*(undefined4 *)(iVar1 + 0x24));
  thunk_FUN_ram_4ff209c6(iVar1);
  return 0;
}


