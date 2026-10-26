/* Firmware entry: 0x4810b9ce */

void FUN_ram_4810b9ce(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 uVar3;
  uint uVar4;
  char cVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((((*(char *)(param_2 + 0x6e) == '\0') && (*(char *)(param_1 + 0xd68) == '\0')) ||
      (*(int *)(param_1 + 0xd6c) != 0)) || (*(int *)(param_1 + 0xd78) != 0)) {
    return;
  }
  if (*(char *)(param_1 + 0xd68) == '\0') {
    if (*(int *)(param_1 + 0xd5c) == 0) {
      if (*(char *)(param_1 + 0xd08) == '\0') {
        return;
      }
      uVar4 = (uint)(*(char *)(param_1 + 0xd09) != '\0');
      if (((((*(char *)(param_1 + uVar4 + 0xc98) != '\0') &&
            (iVar2 = *(int *)((uVar4 + 0x324) * 4 + param_1 + 0xc), iVar2 != 0)) &&
           (((uint)(param_3 - iVar2) < 0x5dd &&
            ((*(int *)(param_1 + 0xd30) == 0x4f3 &&
             (*(char *)(param_1 + 0xd3d) == (char)((*(char *)(param_2 + 0x6f) != '\x01') + '\x01')))
            )))) && (*(int *)(param_1 + 0xd54) != 0)) &&
         ((uint)(param_3 - *(int *)(param_1 + 0xd54)) < 0x1f5)) {
        if ((uint)(param_3 - *(int *)(param_1 + 0xd20)) < 0x32) {
          return;
        }
        uVar1 = FUN_ram_4805637a(param_1 + 0xd08,(uVar4 + 0x191) * 8 + param_1,param_3);
        if (*(char *)(param_1 + 0xd08) == '\0') {
          *(undefined1 *)(param_1 + 0xd68) = 1;
          return;
        }
        iVar2 = FUN_ram_4810b866(param_1,uVar1,param_2);
        if (iVar2 != 0) {
          return;
        }
      }
      FUN_ram_480df148(param_1,1);
      return;
    }
    if (0x2ee < (uint)(param_3 - *(int *)(param_1 + 0xd60))) {
      FUN_ram_480ea41a(*(undefined4 *)(param_1 + 0x58));
      return;
    }
    if ((uint)(param_3 - *(int *)(param_1 + 0xd64)) < 0x32) {
      return;
    }
    iVar2 = FUN_ram_4810b866(param_1,*(int *)(param_1 + 0xd5c),param_2);
    if (iVar2 == 0) {
      return;
    }
    *(int *)(param_1 + 0xd64) = param_3;
    return;
  }
  iVar2 = *(int *)(param_1 + 0x58);
  if (*(int *)(param_1 + 0xd30) == 0x4f3) {
    cVar5 = '\x02';
    if (*(char *)(param_2 + 0x6f) == '\x01') {
      cVar5 = '\x01';
    }
    if (((*(char *)(param_1 + 0xd3d) != cVar5) || (*(int *)(param_1 + 0xd54) == 0)) ||
       (500 < (uint)(param_3 - *(int *)(param_1 + 0xd54)))) goto LAB_ram_4810baea;
    uVar3 = 0;
    if (*(char *)(iVar2 + 0x9fa) == '\0') goto LAB_ram_4810bafe;
  }
  else {
LAB_ram_4810baea:
    if (*(char *)(iVar2 + 0x9fa) == '\0') goto LAB_ram_4810bafe;
    uVar3 = 1;
  }
  *(undefined1 *)(iVar2 + 0x9fe) = uVar3;
LAB_ram_4810bafe:
  FUN_ram_4810b866(param_1,0,param_2);
  return;
}


