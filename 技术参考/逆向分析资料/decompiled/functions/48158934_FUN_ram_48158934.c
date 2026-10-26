/* Firmware entry: 0x48158934 */

undefined4 FUN_ram_48158934(undefined4 param_1)

{
  int iVar1;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  code *pcStack_1c;
  undefined4 *puStack_18;
  undefined4 uStack_14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puStack_18 = &uStack_28;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  pcStack_1c = FUN_ram_48157366;
  uStack_14 = param_1;
  iVar1 = FUN_ram_4814e864(0);
  if (iVar1 != 0) {
    (*pcStack_1c)(&uStack_24);
    return uStack_28;
  }
  FUN_ram_4814e408(&DAT_ram_4ff6e254,0);
  FUN_ram_481378ce(&LAB_ram_48156898,&uStack_24,&DAT_ram_4ff6e258);
  FUN_ram_4814e3a4(&DAT_ram_4ff6e254);
  return uStack_28;
}


