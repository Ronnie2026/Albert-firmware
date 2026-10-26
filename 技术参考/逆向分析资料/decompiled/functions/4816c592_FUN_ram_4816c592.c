/* Firmware entry: 0x4816c592 */

undefined4
FUN_ram_4816c592(int *param_1,undefined1 *param_2,undefined1 *param_3,int param_4,int *param_5)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  *param_5 = 0;
  puVar1 = param_2;
  if (param_1[2] == 1) {
    if (param_3 < param_2) {
      return 0xffff9600;
    }
    if ((uint)((int)param_3 - (int)param_2) < param_1[0x35] + 5U) {
      return 0xffff9600;
    }
    param_2[1] = 1;
    param_2[2] = 0;
    *param_2 = 0xff;
    param_2[3] = (char)param_1[0x35] + '\x01';
    param_2[4] = (char)param_1[0x35];
    FUN_ram_4ff45158(param_2 + 5,param_1 + 0x36,param_1[0x35]);
    puVar1 = param_2 + param_1[0x35] + 5;
  }
  if (param_4 != 0) {
    if (param_3 < puVar1) {
      return 0xffff9600;
    }
    if ((int)param_3 - (int)puVar1 < 6) {
      return 0xffff9600;
    }
    *puVar1 = 0;
    puVar1[2] = 0;
    puVar1[5] = 0;
    puVar1[1] = 0xb;
    puVar1[3] = 2;
    puVar1[4] = 1;
    puVar1 = puVar1 + 6;
  }
  iVar3 = *param_1;
  puVar2 = puVar1;
  if (*(char *)(iVar3 + 0xc) != '\0') {
    if (param_3 < puVar1) {
      return 0xffff9600;
    }
    if ((int)param_3 - (int)puVar1 < 5) {
      return 0xffff9600;
    }
    *puVar1 = 0;
    puVar1[2] = 0;
    puVar1[1] = 1;
    puVar1[3] = 1;
    puVar2 = puVar1 + 5;
    puVar1[4] = *(undefined1 *)(*param_1 + 0xc);
    iVar3 = *param_1;
  }
  if (*(char *)(iVar3 + 0xd) != '\0') {
    if (param_3 < puVar2) {
      return 0xffff9600;
    }
    if ((int)param_3 - (int)puVar2 < 4) {
      return 0xffff9600;
    }
    *puVar2 = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[1] = 0x16;
    iVar3 = *param_1;
    puVar2 = puVar2 + 4;
  }
  if (*(char *)(iVar3 + 0xe) != '\0') {
    if (param_3 < puVar2) {
      return 0xffff9600;
    }
    if ((int)param_3 - (int)puVar2 < 4) {
      return 0xffff9600;
    }
    *puVar2 = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[1] = 0x17;
    iVar3 = *param_1;
    puVar2 = puVar2 + 4;
  }
  puVar1 = puVar2;
  if ((*(byte *)(iVar3 + 0x10) & 1) != 0) {
    if (puVar2 <= param_3) {
      iVar3 = *(int *)(param_1[0xf] + 0x74);
      if (iVar3 + 4U <= (uint)((int)param_3 - (int)puVar2)) {
        puVar2[2] = (char)((uint)iVar3 >> 8);
        *puVar2 = 0;
        puVar2[3] = (char)iVar3;
        puVar2[1] = 0x23;
        puVar1 = puVar2 + 4;
        if ((*(int *)(param_1[0xf] + 0x70) != 0) && (iVar3 != 0)) {
          FUN_ram_4ff45158();
          puVar1 = puVar2 + iVar3 + 4U;
        }
        goto LAB_ram_4816c6ec;
      }
    }
    return 0xffff9600;
  }
LAB_ram_4816c6ec:
  *param_5 = (int)puVar1 - (int)param_2;
  return 0;
}


