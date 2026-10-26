/* Firmware entry: 0x4805fc76 */

char FUN_ram_4805fc76(uint *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  char cVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint *puVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar1 = param_1[0x6f];
  if ((char)uVar1 == '\0') {
    return '\0';
  }
  uVar15 = param_1[0x6e];
  puVar18 = param_1 + 100;
  iVar3 = 0;
  cVar7 = '\0';
  do {
    cVar11 = '\x03';
    do {
      uVar10 = *param_1;
      fence();
      if ((uVar10 != 0) && ((uVar10 & 1) == 0)) {
        uVar16 = param_1[1];
        uVar14 = param_1[2];
        uVar6 = param_1[3];
        uVar5 = param_1[4];
        uVar4 = param_1[5];
        uVar2 = param_1[6];
        uVar21 = param_1[7];
        uVar20 = param_1[8];
        uVar19 = param_1[9];
        fence();
        fence();
        if (uVar10 == *param_1) {
          if (*puVar18 != uVar10) {
            uVar12 = 0x811c9dc5;
            uVar17 = 0;
            do {
              uVar8 = uVar17 & 0x1f;
              uVar17 = uVar17 + 8;
              uVar12 = (uVar12 ^ uVar10 >> uVar8 & 0xff) * 0x1000193;
            } while (uVar17 != 0x20);
            uVar17 = 0;
            do {
              uVar8 = uVar17 & 0x1f;
              uVar17 = uVar17 + 8;
              uVar12 = (uVar12 ^ uVar16 >> uVar8 & 0xff) * 0x1000193;
            } while (uVar17 != 0x20);
            uVar17 = 0;
            do {
              uVar8 = uVar17 & 0x1f;
              uVar17 = uVar17 + 8;
              uVar12 = (uVar12 ^ uVar14 >> uVar8 & 0xff) * 0x1000193;
            } while (uVar17 != 0x20);
            uVar17 = 0;
            do {
              uVar8 = uVar17 & 0x1f;
              uVar17 = uVar17 + 8;
              uVar12 = (uVar12 ^ uVar6 >> uVar8 & 0xff) * 0x1000193;
            } while (uVar17 != 0x20);
            uVar17 = 0;
            do {
              uVar8 = uVar17 & 0x1f;
              uVar17 = uVar17 + 8;
              uVar12 = (uVar12 ^ uVar5 >> uVar8 & 0xff) * 0x1000193;
            } while (uVar17 != 0x20);
            uVar17 = 0;
            do {
              uVar8 = uVar17 & 0x1f;
              uVar17 = uVar17 + 8;
              uVar12 = (uVar12 ^ uVar4 >> uVar8 & 0xff) * 0x1000193;
            } while (uVar17 != 0x20);
            uVar17 = 0;
            do {
              uVar8 = uVar17 & 0x1f;
              uVar17 = uVar17 + 8;
              uVar12 = (uVar12 ^ uVar2 >> uVar8 & 0xff) * 0x1000193;
            } while (uVar17 != 0x20);
            uVar17 = 0;
            do {
              uVar8 = uVar17 & 0x1f;
              uVar17 = uVar17 + 8;
              uVar12 = (uVar12 ^ uVar21 >> uVar8 & 0xff) * 0x1000193;
            } while (uVar17 != 0x20);
            uVar17 = 0;
            do {
              uVar8 = uVar17 & 0x1f;
              uVar17 = uVar17 + 8;
              uVar12 = (uVar12 ^ uVar20 >> uVar8 & 0xff) * 0x1000193;
            } while (uVar17 != 0x20);
            uVar17 = 0;
            do {
              uVar13 = uVar12;
              uVar8 = uVar19 >> (uVar17 & 0x1f) & 0xff;
              uVar17 = uVar17 + 8;
              uVar12 = (uVar8 ^ uVar13) * 0x1000193;
            } while (uVar17 != 0x20);
            if (uVar8 == uVar13) {
              uVar12 = 0xffffffff;
              uVar17 = 0;
            }
            else {
              uVar17 = ~uVar12;
            }
            iVar9 = (uVar10 >> 1 & 1) * 0x30 + uVar15 * 0x3e4 + iVar3 * 0x60 + param_2;
            *(undefined4 *)(iVar9 + 0x4c) = 0;
            *(undefined4 *)(iVar9 + 0x50) = 0;
            fence();
            *(uint *)(iVar9 + 0x24) = uVar10;
            *(uint *)(iVar9 + 0x28) = uVar16;
            *(uint *)(iVar9 + 0x2c) = uVar14;
            *(uint *)(iVar9 + 0x30) = uVar6;
            *(uint *)(iVar9 + 0x34) = uVar5;
            *(uint *)(iVar9 + 0x38) = uVar4;
            *(uint *)(iVar9 + 0x3c) = uVar2;
            *(uint *)(iVar9 + 0x40) = uVar21;
            *(uint *)(iVar9 + 0x44) = uVar20;
            *(uint *)(iVar9 + 0x48) = uVar19;
            fence();
            *(uint *)(iVar9 + 0x50) = uVar17;
            *(uint *)(iVar9 + 0x4c) = uVar12;
            fence();
            *puVar18 = uVar10;
            cVar7 = (char)uVar1;
          }
          break;
        }
      }
      cVar11 = cVar11 + -1;
    } while (cVar11 != '\0');
    param_1 = param_1 + 10;
    puVar18 = puVar18 + 1;
    iVar3 = iVar3 + 1;
    if (iVar3 == 10) {
      return cVar7;
    }
  } while( true );
}


