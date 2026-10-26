/* Firmware entry: 0x48156f80 */

void FUN_ram_48156f80(int param_1)

{
  uint uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(int *)(param_1 + 0x10) != 0) {
    if ((*(byte *)(*(int *)(param_1 + 0x10) + 0xe7) & 1) == 0) {
      FUN_ram_48139e60();
      uVar1 = *(uint *)(param_1 + 0x54);
    }
    else {
      FUN_ram_48139dfe();
      FUN_ram_48139e60(*(undefined4 *)(param_1 + 0x10));
      uVar1 = *(uint *)(param_1 + 0x54);
    }
    if ((uVar1 & 8) != 0) {
      FUN_ram_4814268a(&LAB_ram_48156c7a,*(undefined4 *)(param_1 + 0x10));
      uVar1 = *(uint *)(param_1 + 0x54);
    }
    if (((uVar1 & 0x80) != 0) && (*(char *)(param_1 + 0x68) != '\0')) {
      *(undefined1 *)(param_1 + 0x68) = 0;
      FUN_ram_4814268a(FUN_ram_48156c38,param_1);
      uVar1 = *(uint *)(param_1 + 0x54);
    }
    if ((uVar1 & 1) != 0) {
      FUN_ram_48144df4(*(undefined4 *)(param_1 + 0x10));
      return;
    }
  }
  return;
}


