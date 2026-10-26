/* Firmware entry: 0x48182890 */

undefined4 FUN_ram_48182890(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_4 - 7U < 7) {
    *(undefined4 *)(param_1 + 0x34) = param_2;
    *(int *)(param_1 + 0x30) = -param_4 + 0xf;
    *(undefined1 *)(param_1 + 0x11) = 0;
    *(undefined1 *)(param_1 + 0x12) = 0;
    *(undefined1 *)(param_1 + 0x13) = 0;
    *(undefined1 *)(param_1 + 0x14) = 0;
    *(undefined1 *)(param_1 + 0x15) = 0;
    *(undefined1 *)(param_1 + 0x16) = 0;
    *(undefined1 *)(param_1 + 0x17) = 0;
    *(undefined1 *)(param_1 + 0x18) = 0;
    *(undefined1 *)(param_1 + 0x19) = 0;
    *(undefined1 *)(param_1 + 0x1a) = 0;
    *(undefined1 *)(param_1 + 0x1b) = 0;
    *(undefined1 *)(param_1 + 0x1c) = 0;
    *(undefined1 *)(param_1 + 0x1d) = 0;
    *(undefined1 *)(param_1 + 0x1e) = 0;
    *(undefined1 *)(param_1 + 0x1f) = 0;
    *(char *)(param_1 + 0x10) = (char)-param_4 + '\x0e';
    FUN_ram_4ff45158(param_1 + 0x11,param_3,param_4);
    memset((void *)(param_1 + param_4 + 0x11),0,*(size_t *)(param_1 + 0x30));
    *(undefined1 *)(param_1 + 0x1f) = 1;
    FUN_ram_4ff45158(param_1 + 1,param_3,param_4);
    *(uint *)(param_1 + 0x7c) = *(uint *)(param_1 + 0x7c) | 1;
    uVar1 = FUN_ram_48182522(param_1);
    return uVar1;
  }
  return 0xfffffff3;
}


