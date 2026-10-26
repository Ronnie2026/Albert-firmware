/* Firmware entry: 0x48139f8a */

void FUN_ram_48139f8a(int param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  undefined1 auStack_1c [16];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
    return;
  }
  if ((*(byte *)(param_1 + 0xe7) & 4) == 0) {
    *(byte *)(param_1 + 0xe7) = *(byte *)(param_1 + 0xe7) | 4;
    FUN_ram_48144f32();
    if ((*(byte *)(param_1 + 0xe7) & 5) == 5) {
      if ((*(int *)(param_1 + 4) != 0) && ((*(byte *)(param_1 + 0xe7) & 0x20) != 0)) {
        FUN_ram_48146b40(param_1);
      }
      FUN_ram_48149bb6(param_1);
    }
    FUN_ram_4814c8e2(param_1);
    auStack_1c[0] = 1;
    puVar1 = DAT_ram_4ff6e1b0;
    while (puVar1 != (undefined4 *)0x0) {
      pcVar2 = (code *)*puVar1;
      puVar1 = (undefined4 *)puVar1[1];
      (*pcVar2)(param_1,4,auStack_1c);
    }
    return;
  }
  return;
}


