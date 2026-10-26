/* Firmware entry: 0x480a3262 */

bool FUN_ram_480a3262(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  size_t sVar5;
  char *pcVar6;
  size_t sVar7;
  void *pvVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  byte *pbVar12;
  int iVar13;
  void *__s;
  int *piVar14;
  int iVar15;
  int *piVar16;
  size_t local_30;
  void *pvStack_2c;
  size_t sStack_28;
  char *pcStack_24;
  
  iVar3 = DAT_ram_4ff6dc9c;
  iVar2 = DAT_ram_4ff5cbe8;
  iVar9 = DAT_ram_4ff5cbdc;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((DAT_ram_4ff6dc9c != 0) && (*(char *)(DAT_ram_4ff6dc9c + 0x87b6a) != '\0')) {
    iVar13 = DAT_ram_4ff5cbdc * 0x1d40;
    iVar4 = *(int *)(DAT_ram_4ff5cbe8 + iVar13 + 0x42c);
    piVar16 = (int *)(iVar13 + 0x2c + DAT_ram_4ff5cbe8);
    if (iVar4 == 0) {
      iVar4 = 0;
      sVar5 = 0;
    }
    else {
      iVar15 = 0;
      piVar14 = piVar16;
      do {
        if (*piVar14 == 0x12) {
          pbVar12 = (byte *)piVar14[1];
          pcVar6 = "X-P4-Command-Nonce";
          uVar11 = 0x58;
          while( true ) {
            pcVar6 = pcVar6 + 1;
            uVar10 = (uint)*pbVar12;
            if ((uVar10 - 0x41 & 0xff) < 0x1a) {
              uVar10 = uVar10 + 0x20;
            }
            if ((uVar11 - 0x41 & 0xff) < 0x1a) {
              uVar11 = uVar11 + 0x20;
            }
            if (uVar11 != uVar10) break;
            pbVar12 = pbVar12 + 1;
            if ((byte *)pcVar6 == (byte *)0x481cbfd2) {
              sVar5 = piVar16[iVar15 * 4 + 2];
              iVar4 = piVar16[iVar15 * 4 + 3];
              goto LAB_ram_480a331e;
            }
            uVar11 = (uint)(byte)*pcVar6;
          }
        }
        iVar15 = iVar15 + 1;
        piVar14 = piVar14 + 4;
      } while (iVar15 != iVar4);
      iVar4 = 0;
      sVar5 = 0;
    }
LAB_ram_480a331e:
    iVar15 = FUN_ram_4ff453ae(iVar13 + 0x8a0 + DAT_ram_4ff5cbe8,"127.0.0.1");
    if (iVar15 == 0) {
      sVar7 = strlen((char *)(iVar3 + 0x255));
      if ((sVar7 == sVar5) &&
         ((sVar5 == 0 || (iVar4 = FUN_ram_4ff4511a(iVar4,(char *)(iVar3 + 0x255),sVar5), iVar4 == 0)
          ))) {
        iVar13 = iVar2 + iVar13;
        uVar11 = *(uint *)(iVar13 + 0x430);
        __s = *(void **)(iVar13 + 0x434);
        local_30 = uVar11;
        if ((uVar11 != 0) &&
           ((pvVar8 = memchr(__s,0x3f,uVar11), pvVar8 != (void *)0x0 &&
            ((uint)((int)pvVar8 - (int)__s) < uVar11)))) {
          local_30 = (int)pvVar8 - (int)__s;
        }
        pcVar6 = (char *)(iVar3 + 0x869cd);
        sStack_28 = strlen(pcVar6);
        if ((sStack_28 == local_30) &&
           (pvStack_2c = __s, pcStack_24 = pcVar6,
           iVar4 = FUN_ram_480a10f0(&local_30,local_30,pcVar6), iVar4 == 0)) {
          cVar1 = *(char *)(iVar2 + iVar9 * 0x1d40 + 0x440);
          if (cVar1 == '\0') {
            iVar9 = FUN_ram_4ff453ae(iVar3 + 0x869c5,&DAT_ram_481c87b8);
            return iVar9 == 0;
          }
          if (cVar1 == '\x01') {
            iVar9 = FUN_ram_4ff453ae(iVar3 + 0x869c5,&DAT_ram_481c87b8);
            return iVar9 != 0;
          }
        }
      }
    }
  }
  return false;
}


