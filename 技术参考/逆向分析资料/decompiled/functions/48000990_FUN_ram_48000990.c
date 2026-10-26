/* Firmware entry: 0x48000990 */

void FUN_ram_48000990(void)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  undefined1 *puVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (mhartid == 0) {
    puVar3 = (uint *)&DAT_ram_500d6000;
    do {
      puVar4 = puVar3 + 1;
      *puVar3 = *puVar3 & 0xffffffc0;
      puVar3 = puVar4;
    } while (puVar4 != (uint *)0x500d6220);
  }
  else {
    puVar5 = &DAT_ram_500d6000;
    do {
      puVar3 = (uint *)(puVar5 + 0x800);
      puVar5 = puVar5 + 4;
      *puVar3 = *puVar3 & 0xffffffc0;
    } while (puVar5 != (undefined1 *)0x500d6220);
  }
  iVar1 = 0;
  do {
    iVar2 = iVar1 + 1;
    FUN_ram_48129d20(iVar1,1);
    iVar1 = iVar2;
  } while (iVar2 != 0x20);
  return;
}


