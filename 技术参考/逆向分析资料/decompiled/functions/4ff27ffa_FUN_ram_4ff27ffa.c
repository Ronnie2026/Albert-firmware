/* Firmware entry: 0x4ff27ffa */

void FUN_ram_4ff27ffa(int param_1)

{
  char cVar1;
  bool bVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  *(bool *)(param_1 + 0x2ea8) = *(int *)(param_1 + 0x2c) != 0;
  *(undefined1 *)(param_1 + 0x2ea9) = *(undefined1 *)(param_1 + 0x87d);
  *(undefined1 *)(param_1 + 0x2eaa) = *(undefined1 *)(param_1 + 0x87e);
  cVar1 = *(char *)(param_1 + 0x881);
  if (cVar1 == '\0') {
    cVar1 = *(char *)(param_1 + 0x880);
  }
  *(char *)(param_1 + 0x2eab) = cVar1;
  *(undefined1 *)(param_1 + 0x2eac) = *(undefined1 *)(param_1 + 0x28);
  *(undefined1 *)(param_1 + 0x2ead) = *(undefined1 *)(param_1 + 0x883);
  *(undefined4 *)(param_1 + 0x2eb0) = *(undefined4 *)(param_1 + 0x24);
  bVar2 = false;
  if (*(char *)(param_1 + 0x14) == '\x02') {
    bVar2 = 0x7f < *(ushort *)(param_1 + 0x3088);
  }
  *(bool *)(param_1 + 0x308c) = bVar2;
  return;
}


