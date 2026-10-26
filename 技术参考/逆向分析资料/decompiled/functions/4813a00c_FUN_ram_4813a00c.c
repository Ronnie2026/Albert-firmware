/* Firmware entry: 0x4813a00c */

void FUN_ram_4813a00c(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 auStack_1c [12];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uStack_20 = 0x100007f;
  uStack_28 = 0x100007f;
  uStack_24 = 0xff;
  FUN_ram_48139af8(&DAT_ram_4ff6cdf8,&uStack_28,&uStack_24,&uStack_20,0,&DAT_ram_4813979c,
                   &DAT_ram_481377ce);
  DAT_ram_4ff6ce58 = 6;
  DAT_ram_4ff6ce8c = 0x10;
  DAT_ram_4ff6ce50 = 0x1000000;
  DAT_ram_4ff6ce44 = 0;
  DAT_ram_4ff6ce48 = 0;
  DAT_ram_4ff6ce4c = 0;
  DAT_ram_4ff6ce54 = 0;
  FUN_ram_48139f8a(&DAT_ram_4ff6cdf8);
  if ((DAT_ram_4ff6cedf & 1) != 0) {
    return;
  }
  DAT_ram_4ff6cedf = DAT_ram_4ff6cedf | 1;
  auStack_1c[0] = 1;
  puVar1 = DAT_ram_4ff6e1b0;
  while (puVar1 != (undefined4 *)0x0) {
    pcVar2 = (code *)*puVar1;
    puVar1 = (undefined4 *)puVar1[1];
    (*pcVar2)(&DAT_ram_4ff6cdf8,8,auStack_1c);
  }
  if ((DAT_ram_4ff6cedf & 5) == 5) {
    if ((DAT_ram_4ff6cdfc != 0) && ((DAT_ram_4ff6cedf & 0x20) != 0)) {
      FUN_ram_48146b40(&DAT_ram_4ff6cdf8);
    }
    FUN_ram_48149bb6(&DAT_ram_4ff6cdf8);
  }
  FUN_ram_4814c8e2(&DAT_ram_4ff6cdf8);
  return;
}


