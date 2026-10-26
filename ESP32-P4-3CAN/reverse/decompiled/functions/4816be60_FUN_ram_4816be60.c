/* Firmware entry: 0x4816be60 */

undefined4 FUN_ram_4816be60(int param_1,undefined1 *param_2,undefined1 *param_3,uint *param_4)

{
  char *__s;
  size_t sVar1;
  int iVar2;
  int iVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  __s = *(char **)(param_1 + 0xcc);
  *param_4 = 0;
  if (__s != (char *)0x0) {
    if (param_3 < param_2) {
      return 0xffff9600;
    }
    sVar1 = strlen(__s);
    if ((uint)((int)param_3 - (int)param_2) < sVar1 + 7) {
      return 0xffff9600;
    }
    iVar2 = (sVar1 & 0xffff) + 3;
    iVar3 = (sVar1 & 0xffff) + 1;
    *param_2 = 0;
    param_2[1] = 0x10;
    *param_4 = sVar1 + 7;
    param_2[3] = (char)((uint)(iVar2 * 0x100) >> 8);
    param_2[2] = (char)((uint)iVar2 >> 8);
    param_2[6] = (char)sVar1;
    param_2[4] = (char)((uint)iVar3 >> 8);
    param_2[5] = (char)((uint)(iVar3 * 0x100) >> 8);
    FUN_ram_4ff45158(param_2 + 7,*(undefined4 *)(param_1 + 0xcc));
  }
  return 0;
}


