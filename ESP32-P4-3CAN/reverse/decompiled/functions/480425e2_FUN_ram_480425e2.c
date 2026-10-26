/* Firmware entry: 0x480425e2 */

bool FUN_ram_480425e2(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  uint auStack_14 [4];
  undefined4 uStack_4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_3 != *(int *)(param_1 + 0x78)) {
    return false;
  }
  piVar2 = (int *)(param_1 + 0x38);
  uVar3 = 0;
  do {
    uVar1 = uVar3 & 0x1f;
    uVar3 = uVar3 + 1;
    if ((*(byte *)(param_1 + 0x7e) >> uVar1 & 1) != 0) {
      if (*(char *)((int)piVar2 + 5) == '\0') {
        return false;
      }
      if (500 < (uint)(param_2 - *piVar2)) {
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return false;
      }
    }
    piVar2 = piVar2 + 2;
    if (uVar3 == 4) {
      if (*(char *)(param_1 + 0x7c) == '\x02') {
        uVar3 = param_2 - *(int *)(param_1 + 0x8c);
        if (*(char *)(param_1 + 0x13) == '\0') {
          uVar3 = (uVar3 * 4) / 5;
        }
        else if (*(char *)(param_1 + 0x13) == '\x02') {
          uVar3 = uVar3 * 5 >> 2;
        }
        auStack_14[0] = DAT_ram_48222f28;
        auStack_14[1] = DAT_ram_48222f2c;
        auStack_14[2] = DAT_ram_48222f30;
        auStack_14[3] = DAT_ram_48222f34;
        uStack_4 = DAT_ram_48222f38;
        return uVar3 < auStack_14[*(byte *)(param_1 + 0x10)];
      }
      return true;
    }
  } while( true );
}


