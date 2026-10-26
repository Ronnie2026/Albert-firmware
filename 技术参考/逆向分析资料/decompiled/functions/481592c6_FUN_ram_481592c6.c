/* Firmware entry: 0x481592c6 */

undefined4 FUN_ram_481592c6(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_24;
  undefined4 uStack_20;
  code *pcStack_1c;
  int iStack_18;
  undefined4 uStack_14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (((param_1 != 0) && (*(char **)(param_1 + 0x20) != (char *)0x0)) &&
     (**(char **)(param_1 + 0x20) != '\0')) {
    return 0x106;
  }
  uStack_24 = 0;
  uStack_20 = 0;
  pcStack_1c = FUN_ram_48158328;
  iStack_18 = param_1;
  uStack_14 = param_2;
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


