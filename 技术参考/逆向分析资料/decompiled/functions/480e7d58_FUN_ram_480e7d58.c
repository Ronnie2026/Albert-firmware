/* Firmware entry: 0x480e7d58 */

void FUN_ram_480e7d58(int param_1,undefined4 param_2)

{
  char cVar1;
  bool bVar2;
  short *psVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  short sVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  fence();
  fence();
  if (DAT_ram_4ff6df34 == '\0') {
LAB_ram_480e7d88:
    fence();
    if (DAT_ram_4ff6a5a9 == '\0') {
      fence();
      fence();
      goto joined_r0x480e7dda;
    }
  }
  else {
    fence();
    fence();
    if (DAT_ram_4ff6df30 != '\0') goto LAB_ram_480e7d88;
    fence();
    fence();
    if (DAT_ram_4ff6df38 == '\0') goto LAB_ram_480e7d88;
  }
  FUN_ram_480e77ae(&DAT_ram_4ff60e20,param_1,param_2);
  fence();
  fence();
joined_r0x480e7dda:
  if (DAT_ram_4ff6df34 != '\0') {
    fence();
    fence();
    if (DAT_ram_4ff6df30 == '\0') {
      fence();
      fence();
      if (((DAT_ram_4ff6df38 != '\0') && (param_1 == 0)) && (fence(), DAT_ram_4ff4a02d != '\0')) {
        iVar6 = FUN_ram_48025b94();
        FUN_ram_4ff3ec14(&DAT_ram_4ff48d94,0xffffffff);
        if (DAT_ram_4ff4a020 == '\x03') {
          uVar10 = (uint)DAT_ram_4ff4a02c;
          uVar14 = (uint)DAT_ram_4ff4a02e;
          if (uVar10 != 0) {
            uVar12 = 0;
            uVar11 = 0;
            bVar2 = false;
            cVar5 = '\0';
            do {
              psVar3 = DAT_ram_4ff6420c;
              uVar13 = (int)uVar14 % (int)uVar10;
              cVar1 = (&DAT_ram_4ff4959c)[uVar13 * 0xf4];
              cVar4 = cVar5;
              if (((cVar1 == '\0') ||
                  (cVar4 = cVar1, iVar6 - *(int *)(&DAT_ram_4ff49598 + uVar13 * 0xf4) < 0)) ||
                 (bVar2)) {
LAB_ram_480e7ebe:
                uVar10 = (uint)DAT_ram_4ff4a02c;
                cVar5 = cVar4;
              }
              else {
                if (DAT_ram_4ff6420c != (short *)0x0) {
                  sVar9 = *DAT_ram_4ff6420c;
                  if (sVar9 == 0) goto LAB_ram_480e7ebe;
                  if (*(code **)(DAT_ram_4ff6420c + 2) != (code *)0x0) {
                    iVar8 = (**(code **)(DAT_ram_4ff6420c + 2))();
                    if (*(uint *)(psVar3 + 6) <= (uint)(iVar8 - *(int *)(psVar3 + 4)))
                    goto LAB_ram_480e7ebe;
                    sVar9 = *psVar3;
                  }
                  *psVar3 = sVar9 + -1;
                }
                uVar10 = (uint)DAT_ram_4ff4a02c;
                uVar12 = uVar13 & 0xff;
                bVar2 = true;
                DAT_ram_4ff4a02e = (byte)((uVar13 + 1) % uVar10);
                (&DAT_ram_4ff4959c)[uVar13 * 0xf4] = 0;
              }
              uVar11 = uVar11 + 1 & 0xff;
              uVar14 = uVar14 + 1;
              if (uVar10 <= uVar11) {
                fence();
                DAT_ram_4ff4a02d = cVar5;
                FUN_ram_4ff3ee10(&DAT_ram_4ff48d94);
                if (!bVar2) {
                  return;
                }
                uVar7 = FUN_ram_48025ba6();
                FUN_ram_480e5530(&DAT_ram_4ff48d94,uVar12,uVar7,&DAT_ram_4ff60e20,1);
                return;
              }
            } while( true );
          }
        }
        fence();
        DAT_ram_4ff4a02d = 0;
        FUN_ram_4ff3ee10(&DAT_ram_4ff48d94);
        return;
      }
    }
  }
  return;
}


