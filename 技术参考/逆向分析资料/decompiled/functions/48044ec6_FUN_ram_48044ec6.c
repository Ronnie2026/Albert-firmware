/* Firmware entry: 0x48044ec6 */

void FUN_ram_48044ec6(int param_1,int param_2)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = *(int *)(param_2 + 0x44);
  if ((((iVar1 << 0xc < 0) && (iVar1 << 10 < 0)) && (-1 < iVar1 << 0xe)) &&
     (*(char *)(param_2 + 0x41) != '\0')) {
    *(byte *)(param_2 + 0x46) = *(byte *)(param_2 + 0x46) & 0xfe;
    *(undefined2 *)(param_2 + 0x3e) = *(undefined2 *)(param_1 + 0x3be8);
    *(undefined2 *)(param_1 + 0x3be8) = *(undefined2 *)(param_2 + 0x3c);
    *(short *)(param_1 + 0x3bf0) = *(short *)(param_1 + 0x3bf0) + -1;
    *(short *)(param_1 + 0x3bf2) = *(short *)(param_1 + 0x3bf2) + 1;
  }
  return;
}


