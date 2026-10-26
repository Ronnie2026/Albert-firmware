/* Firmware entry: 0x4803618c */

void FUN_ram_4803618c(void)

{
  undefined2 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar2 = &DAT_ram_4ff4894c;
  puVar3 = &DAT_ram_4ff48914;
  do {
    puVar8 = puVar3;
    puVar7 = puVar2;
    uVar4 = puVar8[1];
    uVar5 = puVar8[2];
    uVar6 = puVar8[3];
    *puVar7 = *puVar8;
    puVar7[1] = uVar4;
    puVar7[2] = uVar5;
    puVar7[3] = uVar6;
    puVar2 = puVar7 + 4;
    puVar3 = puVar8 + 4;
  } while (puVar8 + 4 != (undefined4 *)0x4ff48944);
  uVar1 = *(undefined2 *)(puVar8 + 5);
  puVar7[4] = uRam4ff48944;
  *(undefined2 *)(puVar7 + 5) = uVar1;
  DAT_ram_4ff47e60 = DAT_ram_4ff47e60 + 1;
  DAT_ram_4ff6dd4c = 0;
  if (DAT_ram_4ff47e60 == 0) {
    DAT_ram_4ff47e60 = 1;
  }
  DAT_ram_4ff6dd49 = DAT_ram_4ff6dd3c;
  DAT_ram_4ff6de94 = DAT_ram_4ff6de94 & 0xffffff7f;
  DAT_ram_4ff6dd40 = 0;
  if (DAT_ram_4ff6dd3c != '\0') {
    return;
  }
  DAT_ram_4ff5ca7c = DAT_ram_4ff5ca7c + 1;
  DAT_ram_4ff6de94 = DAT_ram_4ff6de94 | 0x80;
  DAT_ram_4ff6de80 = DAT_ram_4ff6de80 + 1;
  return;
}


