/* Firmware entry: 0x4802b810 */

void FUN_ram_4802b810(byte *param_1)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((-1 < (char)param_1[0xf]) && (param_1 = *(byte **)param_1, param_1 == (byte *)0x0)) {
    return;
  }
  for (; *param_1 != 0; param_1 = param_1 + 1) {
    iVar1 = tolower((uint)*param_1);
    *param_1 = (byte)iVar1;
  }
  return;
}


