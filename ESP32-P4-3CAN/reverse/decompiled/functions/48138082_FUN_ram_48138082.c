/* Firmware entry: 0x48138082 */

void FUN_ram_48138082(uint param_1,int param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined *puVar7;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_2 != 0) {
    iVar6 = param_1 * 0x128;
    if (*(char *)(param_2 + 0x14) == '\x06') {
      if (((&DAT_ram_4ff6ca2a)[iVar6] & 0xfd) != 1) {
                    /* WARNING: Subroutine does not return */
        FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/dns.c",0x423,"dns_call_found",
                         "invalid response");
      }
      (&DAT_ram_4ff6ca2a)[iVar6] = 1;
    }
    else {
      if (((&DAT_ram_4ff6ca2a)[iVar6] & 0xfd) == 1) {
                    /* WARNING: Subroutine does not return */
        FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/dns.c",0x426,"dns_call_found",
                         "invalid response");
      }
      (&DAT_ram_4ff6ca2a)[iVar6] = 0;
    }
  }
  puVar2 = &DAT_ram_4ff6c8d4;
  do {
    if (((code *)*puVar2 != (code *)0x0) && (*(byte *)(puVar2 + 2) == param_1)) {
      (*(code *)*puVar2)(&DAT_ram_4ff6c92a + param_1 * 0x128,param_2,puVar2[1]);
      *puVar2 = 0;
    }
    puVar2 = puVar2 + 3;
  } while (puVar2 != (undefined4 *)&DAT_ram_4ff6c904);
  puVar7 = &DAT_ram_4ff6c904;
  uVar3 = 0;
  uVar5 = (uint)(byte)(&DAT_ram_4ff6c929)[param_1 * 0x128];
  while (((param_1 == uVar3 || (puVar7[0x20] != '\x02')) || ((byte)puVar7[0x25] != uVar5))) {
    uVar4 = uVar3 + 1;
    uVar3 = uVar4 & 0xff;
    puVar7 = puVar7 + 0x128;
    if (uVar3 == 4) {
      if (uVar5 < 4) {
        FUN_ram_4814351a((&DAT_ram_4ff6cda4)[uVar5]);
        bVar1 = (&DAT_ram_4ff6c929)[param_1 * 0x128];
        (&DAT_ram_4ff6c929)[param_1 * 0x128] = (char)uVar4;
        (&DAT_ram_4ff6cda4)[bVar1] = 0;
      }
      return;
    }
  }
  (&DAT_ram_4ff6c929)[param_1 * 0x128] = 4;
  return;
}


