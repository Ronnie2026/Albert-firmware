/* Firmware entry: 0x4813d4fe */

void FUN_ram_4813d4fe(undefined1 param_1)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_4813d344(0x40);
  if (iVar1 != 0) {
    *(undefined1 *)(iVar1 + 0x14) = param_1;
    *(undefined1 *)(iVar1 + 0x2c) = param_1;
  }
  return;
}


