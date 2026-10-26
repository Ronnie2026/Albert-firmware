/* Firmware entry: 0x4815411c */

void FUN_ram_4815411c(int *param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  byte bVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar2 = *param_1;
  bVar5 = 0;
  if ((*(byte *)(iVar2 + 0x127c) & 1) != 0) {
    bVar5 = *(byte *)(iVar2 + 0x12a4) & 1;
  }
  bVar1 = *(byte *)(iVar2 + 0x127c);
  *(byte *)(iVar2 + 0x127c) = bVar1 & 0xfd | bVar5 << 1;
  if ((bVar1 & 8) == 0) {
    do {
      uVar3 = FUN_ram_48155c22();
      *(undefined4 *)(iVar2 + 0x1280) = uVar3;
      iVar4 = FUN_ram_48155c22();
      *(int *)(iVar2 + 0x1284) = iVar4;
      *(byte *)(iVar2 + 0x1280) = *(byte *)(iVar2 + 0x1280) & 0xfd;
    } while (iVar4 == 0 && *(int *)(iVar2 + 0x1280) == 0);
  }
  *(undefined4 *)(iVar2 + 0x12a0) = 0;
  *(undefined4 *)(iVar2 + 0x129c) = 0;
  *(undefined4 *)(iVar2 + 0x1290) = *(undefined4 *)(iVar2 + 0x127c);
  *(undefined4 *)(iVar2 + 0x1294) = *(undefined4 *)(iVar2 + 0x1280);
  *(undefined4 *)(iVar2 + 0x1298) = *(undefined4 *)(iVar2 + 0x1284);
  return;
}


