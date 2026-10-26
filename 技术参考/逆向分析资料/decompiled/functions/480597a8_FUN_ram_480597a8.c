/* Firmware entry: 0x480597a8 */

undefined4 FUN_ram_480597a8(int param_1)

{
  undefined1 uVar1;
  char cVar2;
  int *piVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  uint uVar13;
  char *pcVar14;
  uint *puVar15;
  uint auStack_298 [24];
  undefined1 auStack_238 [4];
  uint auStack_234 [24];
  byte bStack_1d4;
  uint local_1d0 [24];
  undefined1 uStack_170;
  uint local_16c [24];
  undefined1 auStack_10c [4];
  uint auStack_108 [25];
  uint local_a4 [28];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4ff3ec14(param_1 + 0xb18,0xffffffff);
  uVar1 = *(undefined1 *)(param_1 + 0xb39);
  FUN_ram_4ff3ee10(param_1 + 0xb18);
  FUN_ram_48051e92(auStack_298,uVar1);
  FUN_ram_4ff3ec14(param_1 + 0xb30,0xffffffff);
  puVar12 = (uint *)(param_1 + 0x9520);
  puVar10 = local_16c;
  do {
    uVar13 = puVar12[1];
    uVar5 = puVar12[2];
    uVar8 = puVar12[3];
    uVar9 = puVar12[4];
    *puVar10 = *puVar12;
    puVar10[1] = uVar13;
    puVar10[2] = uVar5;
    puVar10[3] = uVar8;
    puVar10[4] = uVar9;
    puVar12 = puVar12 + 5;
    puVar10 = puVar10 + 5;
  } while (puVar12 != (uint *)(param_1 + 0x964c));
  FUN_ram_4ff3ee10(param_1 + 0xb30);
  pcVar14 = &DAT_ram_4ff47e48;
  do {
    cVar2 = *pcVar14;
    if (cVar2 == '\x01') {
      puVar10 = local_16c;
LAB_ram_48059928:
      if ((byte)puVar10[0x18] != 0) {
        puVar12 = puVar10 + (byte)puVar10[0x18];
        do {
          puVar15 = auStack_298;
          if ((cVar2 == '\x01') || (puVar15 = (uint *)(auStack_238 + 0x68), cVar2 != '\x02')) {
            uVar5 = (uint)(byte)puVar15[0x18];
            uVar8 = *puVar10 & 0x7ff;
            if (uVar5 == 0) goto LAB_ram_480599ec;
LAB_ram_48059954:
            uVar9 = 0;
            puVar11 = puVar15;
            do {
              uVar13 = *puVar11;
              puVar11 = puVar11 + 1;
              if (uVar8 <= uVar13) {
                if (uVar9 < uVar5) {
                  if (uVar8 == puVar15[uVar9]) goto LAB_ram_480599c6;
                  if (0x17 < uVar5) goto LAB_ram_480598e8;
                  uVar13 = uVar5 - uVar9 & 0xff;
                  iVar6 = -(uVar13 - 1 & 0xff);
                  cVar4 = (char)uVar5 + '\x01';
                  FUN_ram_4ff4522c(puVar15 + iVar6 + uVar5,puVar15 + (uVar5 - 1) + iVar6,uVar13 << 2
                                  );
                  goto LAB_ram_480599b8;
                }
                break;
              }
              uVar9 = uVar9 + 1 & 0xff;
            } while (uVar9 != uVar5);
            if (0x17 < uVar5) goto LAB_ram_480598e8;
            cVar4 = (char)uVar5 + '\x01';
          }
          else {
            uVar5 = (uint)bStack_1d4;
            puVar15 = (uint *)(auStack_238 + 4);
            uVar8 = *puVar10 & 0x7ff;
            if (uVar5 != 0) goto LAB_ram_48059954;
LAB_ram_480599ec:
            cVar4 = '\x01';
            uVar9 = 0;
          }
LAB_ram_480599b8:
          puVar15[uVar9] = uVar8;
          *(char *)(puVar15 + 0x18) = cVar4;
LAB_ram_480599c6:
          puVar10 = puVar10 + 1;
        } while (puVar10 != puVar12);
      }
    }
    else {
      if (cVar2 == '\x02') {
        puVar10 = (uint *)(auStack_10c + 4);
        goto LAB_ram_48059928;
      }
      if (cVar2 == '\x04') {
        puVar10 = (uint *)(auStack_10c + 0x68);
        goto LAB_ram_48059928;
      }
    }
    pcVar14 = pcVar14 + 1;
    if (pcVar14 == &DAT_ram_4ff47e4b) {
      FUN_ram_4ff3ec14(param_1 + 0x2864,0xffffffff);
      piVar3 = *(int **)(param_1 + 0x1e08);
      FUN_ram_4ff3ee10(param_1 + 0x2864);
      if (((piVar3 == (int *)0x0) ||
          (iVar6 = (**(code **)(*piVar3 + 0x10))(piVar3,1,auStack_298,auStack_238[0]), iVar6 == 0))
         || (iVar6 = (**(code **)(*piVar3 + 0x10))(piVar3,2,auStack_238 + 4,bStack_1d4), iVar6 == 0)
         ) {
LAB_ram_480598e8:
        uVar7 = 0;
      }
      else {
        uVar7 = (**(code **)(*piVar3 + 0x10))(piVar3,4,auStack_238 + 0x68,uStack_170);
      }
      return uVar7;
    }
  } while( true );
}


