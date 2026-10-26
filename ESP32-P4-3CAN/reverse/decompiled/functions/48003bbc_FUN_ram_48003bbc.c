/* Firmware entry: 0x48003bbc */

void FUN_ram_48003bbc(void)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4ff216dc(&DAT_ram_4ff4bdfc);
  uVar3 = 7;
  DAT_ram_4ff4be00 = 7;
  puVar2 = &DAT_ram_4ff4bd3c;
  uVar1 = 0;
  iVar4 = 0;
  do {
    if (((&DAT_ram_4ff4bd4c)[uVar1 * 6] & 0xf) != 0) {
      if (uVar1 < uVar3) {
        DAT_ram_4ff4be00 = uVar1;
      }
      if (iVar4 != 0) {
        FUN_ram_480058ac(iVar4,4,*puVar2,puVar2[1],puVar2[2],puVar2[3]);
      }
      iVar4 = puVar2[5];
      uVar3 = DAT_ram_4ff4be00;
    }
    uVar1 = uVar1 + 1;
    puVar2 = puVar2 + 6;
  } while (uVar1 != 8);
  FUN_ram_480046c0(&DAT_ram_4ff4bd3c + uVar3 * 6);
  FUN_ram_4ff216e6(&DAT_ram_4ff4bdfc);
  return;
}


