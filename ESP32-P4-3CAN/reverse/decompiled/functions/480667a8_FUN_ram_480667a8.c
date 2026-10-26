/* Firmware entry: 0x480667a8 */

void FUN_ram_480667a8(int param_1,int param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_4802b264(param_3,0xd);
  if ((((iVar1 < 0) && (iVar1 = FUN_ram_4802b264(param_3,10), iVar1 < 0)) &&
      (iVar1 = FUN_ram_4802b264(param_4,0xd), iVar1 < 0)) &&
     (iVar1 = FUN_ram_4802b264(param_4,10), iVar1 < 0)) {
    iVar1 = param_1 * 0x1d40 + param_2;
    if (*(char *)(iVar1 + 0x1cdb) < '\0') {
      uVar4 = (*(byte *)(iVar1 + 0x1cdb) & 0x7f) + 4;
    }
    else if (*(int *)(iVar1 + 0x1ccc) == 0) {
      uVar4 = 4;
    }
    else {
      uVar4 = *(int *)(iVar1 + 0x1cd4) + 4;
    }
    if (*(char *)((int)param_3 + 0xf) < '\0') {
      uVar4 = uVar4 + (*(byte *)((int)param_3 + 0xf) & 0x7f);
    }
    else if (*param_3 != 0) {
      uVar4 = uVar4 + param_3[2];
    }
    if (*(char *)((int)param_4 + 0xf) < '\0') {
      uVar4 = uVar4 + (*(byte *)((int)param_4 + 0xf) & 0x7f);
    }
    else if (*param_4 != 0) {
      uVar4 = uVar4 + param_4[2];
    }
    if (uVar4 < 0x801) {
      iVar1 = param_1 * 0x1d40 + 0x1ccc + param_2;
      iVar2 = FUN_ram_4802ae48(iVar1,param_3);
      if (((iVar2 != 0) && (iVar2 = FUN_ram_4802af2c(iVar1,": "), iVar2 != 0)) &&
         ((iVar2 = FUN_ram_4802ae48(iVar1,param_4), iVar2 != 0 &&
          (iVar1 = FUN_ram_4802af2c(iVar1,"\r\n"), iVar1 != 0)))) {
        return;
      }
      if (*(char *)(param_1 * 0x1d40 + param_2 + 0x44c) == '\0') {
        return;
      }
      uVar3 = 7;
      goto LAB_ram_4806689a;
    }
  }
  if (*(char *)(param_2 + param_1 * 0x1d40 + 0x44c) == '\0') {
    return;
  }
  uVar3 = 1;
LAB_ram_4806689a:
  FUN_ram_48065e9c(param_1 * 0x1d40 + 0x1c + param_2,uVar3);
  return;
}


