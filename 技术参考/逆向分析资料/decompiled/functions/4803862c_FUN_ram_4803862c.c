/* Firmware entry: 0x4803862c */

void FUN_ram_4803862c(int param_1)

{
  undefined2 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((DAT_ram_4ff6dd40 == param_1) && (DAT_ram_4ff6dd80 == 0)) {
    puVar2 = &DAT_ram_4ff4894c;
    puVar3 = &DAT_ram_4ff48914;
    do {
      puVar7 = puVar3;
      puVar6 = puVar2;
      uVar8 = puVar7[1];
      uVar4 = puVar7[2];
      uVar5 = puVar7[3];
      *puVar6 = *puVar7;
      puVar6[1] = uVar8;
      puVar6[2] = uVar4;
      puVar6[3] = uVar5;
      puVar2 = puVar6 + 4;
      puVar3 = puVar7 + 4;
    } while (puVar7 + 4 != (undefined4 *)0x4ff48944);
    uVar1 = *(undefined2 *)(puVar7 + 5);
    puVar6[4] = uRam4ff48944;
    *(undefined2 *)(puVar6 + 5) = uVar1;
    DAT_ram_4ff47e60 = DAT_ram_4ff47e60 + 1;
    DAT_ram_4ff6dd4c = 0;
    if (DAT_ram_4ff47e60 == 0) {
      DAT_ram_4ff47e60 = 1;
    }
    DAT_ram_4ff6dd49 = DAT_ram_4ff6dd3c;
    DAT_ram_4ff6de94 = DAT_ram_4ff6de94 & 0xffffff7f;
    DAT_ram_4ff6dd40 = 0;
    if (DAT_ram_4ff6dd3c == '\0') {
      DAT_ram_4ff5ca7c = DAT_ram_4ff5ca7c + 1;
      DAT_ram_4ff6de94 = DAT_ram_4ff6de94 | 0x80;
      DAT_ram_4ff6de80 = DAT_ram_4ff6de80 + 1;
      return;
    }
  }
  return;
}


