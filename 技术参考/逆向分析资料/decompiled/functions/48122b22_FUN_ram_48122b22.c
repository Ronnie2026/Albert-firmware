/* Firmware entry: 0x48122b22 */

void FUN_ram_48122b22(undefined1 *param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  FUN_ram_4802a8a8(param_1 + 0x38,&DAT_ram_481df390);
  param_1[0xc4] = 0xf;
  param_1[0xbd] = 1;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined ***)(param_1 + 0x4c) = &PTR_LAB_ram_4802a33c_ram_481f5060;
  param_1[0x48] = 1;
  return;
}


