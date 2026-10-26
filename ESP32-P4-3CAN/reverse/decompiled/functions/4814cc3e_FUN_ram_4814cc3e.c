/* Firmware entry: 0x4814cc3e */

undefined4 FUN_ram_4814cc3e(int param_1,int param_2)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(char *)(param_1 + 0x20) != '\0') {
    return 0xfffffff7;
  }
  FUN_ram_48155c06();
  if (param_2 != 0) {
    *(undefined1 *)(param_1 + 0x20) = 2;
    FUN_ram_48142636(param_2 * 1000,&LAB_ram_4814cb48,param_1);
    return 0;
  }
  if ((*(byte *)(param_1 + 0x20) & 0xfd) != 0) {
    FUN_ram_4814cb20();
  }
  *(undefined1 *)(param_1 + 0x20) = 3;
  (*(code *)**(undefined4 **)(param_1 + 0xc))(param_1,*(undefined4 *)(param_1 + 0x10));
  return 0;
}


