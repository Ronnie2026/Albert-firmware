/* Firmware entry: 0x481a91f4 */

void FUN_ram_481a91f4(undefined4 *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*param_2 == 0) {
    puVar4 = (uint *)&DAT_ram_500d7000;
  }
  else if (*param_2 == 1) {
    puVar4 = (uint *)&DAT_ram_500d8000;
  }
  else {
    puVar4 = (uint *)&DAT_ram_500d9000;
  }
  iVar3 = param_2[1];
  *param_1 = puVar4;
  param_1[1] = 0;
  param_1[2] = iVar3;
  *(char *)((int)param_1 + 0x15) = (char)param_2[4];
  *(undefined2 *)((int)param_1 + 0x16) = *(undefined2 *)((int)param_2 + 0x12);
  *(char *)(param_1 + 6) = (char)param_2[5];
  *puVar4 = *puVar4 | 1;
  if ((*puVar4 & 1) != 0) {
    *puVar4 = *puVar4 | 2;
    *puVar4 = *puVar4 & 0xfffffffb;
    iVar3 = 0;
    do {
      iVar1 = iVar3 + 1;
      puVar4[iVar3 + 0x10] = puVar4[iVar3 + 0x10] & 0xffffff00;
      puVar4[iVar3 + 0x14] = puVar4[iVar3 + 0x14] | 0xff;
      iVar3 = iVar1;
    } while (iVar1 != 4);
    *puVar4 = *puVar4 | 8;
    uVar2 = param_2[3];
    puVar4[0xf] = puVar4[0xf] & 0xffffff00;
    puVar4[0xe] = puVar4[0xe] & 0xffffff00;
    puVar4[0xd] = puVar4[0xd] & 0xffffff00 | 0x60;
    puVar4[4] = uVar2;
    return;
  }
  return;
}


