/* Firmware entry: 0x48158a08 */

void FUN_ram_48158a08(int param_1)

{
  int iVar1;
  undefined4 uStack_24;
  undefined4 uStack_20;
  code *pcStack_1c;
  int iStack_18;
  undefined4 uStack_14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
    return;
  }
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_14 = 0;
  pcStack_1c = FUN_ram_48157274;
  iStack_18 = param_1;
  iVar1 = FUN_ram_4814e864(0);
  if (iVar1 != 0) {
    (*pcStack_1c)(&uStack_24);
    return;
  }
  FUN_ram_4814e408(&DAT_ram_4ff6e254,0);
  FUN_ram_481378ce(&LAB_ram_48156898,&uStack_24,&DAT_ram_4ff6e258);
  FUN_ram_4814e3a4(&DAT_ram_4ff6e254);
  return;
}


