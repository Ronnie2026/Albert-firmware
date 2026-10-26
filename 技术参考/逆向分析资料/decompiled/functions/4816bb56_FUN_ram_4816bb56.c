/* Firmware entry: 0x4816bb56 */

undefined4 FUN_ram_4816bb56(int *param_1,undefined1 *param_2,undefined1 *param_3,int *param_4)

{
  uint uVar1;
  ushort *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  *param_4 = 0;
  if ((param_3 < param_2) || ((int)param_3 - (int)param_2 < 6)) {
    return 0xffff9600;
  }
  puVar4 = param_2 + 6;
  puVar2 = *(ushort **)(*param_1 + 0x60);
  if (puVar2 == (ushort *)0x0) {
    return 0xffffa180;
  }
  uVar1 = (uint)*puVar2;
  puVar3 = puVar4;
  if (uVar1 != 0) {
    do {
      puVar2 = puVar2 + 1;
      if (((param_1[4] == 0x303) && ((uVar1 >> 8) - 1 < 6)) && ((uVar1 & 0xfd) == 1)) {
        if (param_3 < puVar3) {
          return 0xffff9600;
        }
        if ((int)param_3 - (int)puVar3 < 2) {
          return 0xffff9600;
        }
        *puVar3 = (char)(uVar1 >> 8);
        puVar3[1] = (char)uVar1;
        puVar3 = puVar3 + 2;
      }
      uVar1 = (uint)*puVar2;
    } while (uVar1 != 0);
    if (puVar3 != puVar4) {
      uVar1 = (int)puVar3 - (int)puVar4 & 0xffff;
      param_2[3] = (char)((uVar1 + 2) * 0x100 >> 8);
      *param_2 = 0;
      param_2[2] = (char)(uVar1 + 2 >> 8);
      param_2[4] = (char)(uVar1 >> 8);
      param_2[5] = (char)uVar1;
      param_2[1] = 0xd;
      *param_4 = (int)puVar3 - (int)param_2;
      return 0;
    }
  }
  return 0xffff9400;
}


