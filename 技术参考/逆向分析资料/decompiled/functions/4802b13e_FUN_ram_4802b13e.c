/* Firmware entry: 0x4802b13e */

bool FUN_ram_4802b13e(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(char *)(param_1 + 0xf) < '\0') {
    cVar1 = *(char *)(param_2 + 0xf);
    uVar4 = *(byte *)(param_1 + 0xf) & 0x7f;
  }
  else {
    cVar1 = *(char *)(param_2 + 0xf);
    uVar4 = *(uint *)(param_1 + 8);
  }
  if (cVar1 < '\0') {
    uVar3 = *(byte *)(param_2 + 0xf) & 0x7f;
  }
  else {
    uVar3 = *(uint *)(param_2 + 8);
  }
  if (uVar3 != uVar4) {
    return false;
  }
  iVar2 = FUN_ram_4802b0d6(param_1);
  return iVar2 == 0;
}


