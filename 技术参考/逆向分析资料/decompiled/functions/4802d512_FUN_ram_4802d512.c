/* Firmware entry: 0x4802d512 */

void FUN_ram_4802d512(uint *param_1,int param_2,int param_3,int param_4,int param_5,char param_6)

{
  byte bVar1;
  undefined1 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  byte bVar9;
  int iVar10;
  uint uVar11;
  int iStack_54;
  uint uStack_50;
  byte bStack_4c;
  undefined1 uStack_4b;
  byte bStack_4a;
  undefined1 uStack_49;
  undefined1 uStack_48;
  undefined1 uStack_47;
  undefined1 uStack_46;
  undefined1 uStack_45;
  undefined1 uStack_44;
  undefined1 uStack_43;
  undefined1 uStack_42;
  
  iVar8 = DAT_ram_4ff6df00;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  fence();
  fence();
  if ((((DAT_ram_4ff6df04 != '\0') && (DAT_ram_4ff6df24 != 0)) && (*param_1 < 0x800)) &&
     ((byte)param_1[1] < 9)) {
    fence();
    fence();
    cVar3 = DAT_ram_4ff48b60._1_1_;
    if (param_2 != 0) {
      cVar3 = DAT_ram_4ff48b62;
    }
    if (((cVar3 != '\0') &&
        ((bVar1 = *(byte *)((int)param_1 + 0xd), bVar1 == 0 ||
         ((bVar1 & (byte)DAT_ram_4ff48b60) != 0)))) && (uVar11 = *param_1, uVar11 < 0x800)) {
      uVar7 = 1 << (uVar11 & 0x1f);
      if (((DAT_ram_4ff6def8 == '\0') ||
          ((uVar7 & *(uint *)(&DAT_ram_4ff5cd80 + (uVar11 >> 5) * 4)) != 0)) &&
         ((uVar7 & *(uint *)(&DAT_ram_4ff5cc80 + (uVar11 >> 5) * 4)) == 0)) {
        uStack_49 = 0;
        uStack_48 = 0;
        uStack_47 = 0;
        uStack_46 = 0;
        uStack_45 = 0;
        uStack_44 = 0;
        uStack_43 = 0;
        uStack_42 = 0;
        uVar2 = (undefined1)param_1[1];
        bVar9 = 0;
        if (param_2 != 0) {
          bVar9 = (param_3 != 0) * '\x02' + 1;
        }
        bVar9 = bVar9 | param_6 << 3 | (byte)(param_5 << 2);
        iStack_54 = param_4;
        uStack_50 = uVar11;
        bStack_4c = bVar1;
        uStack_4b = uVar2;
        bStack_4a = bVar9;
        FUN_ram_4ff45158(&uStack_49,(int)param_1 + 5,uVar2);
        iVar10 = 0;
        if (((bVar1 != 1) && (iVar10 = 1, bVar1 != 2)) && (iVar10 = 2, bVar1 != 4)) {
          iVar10 = -1;
        }
        FUN_ram_4ff3ec14(&DAT_ram_4ff47ebc,0xffffffff);
        fence();
        fence();
        if (DAT_ram_4ff6df04 != '\0') {
          fence();
          fence();
          if (iVar8 == DAT_ram_4ff6df00) {
            if (((DAT_ram_4ff48b5c < 0x418938) && (param_5 != 0)) &&
               ((-1 < param_4 - DAT_ram_4ff6df0c &&
                (DAT_ram_4ff48b5c * 1000 <= (uint)(param_4 - DAT_ram_4ff6df0c))))) {
              fence();
              DAT_ram_4ff6df04 = '\0';
              fence();
              DAT_ram_4ff6defa = DAT_ram_4ff6df18 != 0;
              DAT_ram_4ff6df06 = 2;
              DAT_ram_4ff6df08 = FUN_ram_48025ba6();
            }
            else {
              uVar6 = FUN_ram_48025ba6();
              uVar5 = DAT_ram_4ff6df20;
              uVar4 = DAT_ram_4ff6df1c;
              uVar7 = DAT_ram_4ff6df18;
              if (DAT_ram_4ff6df18 < DAT_ram_4ff6df20) {
                iStack_54 = param_4;
                uStack_50 = uVar11;
                bStack_4c = bVar1;
                uStack_4b = uVar2;
                bStack_4a = bVar9;
                FUN_ram_4ff45158(DAT_ram_4ff6df24 + DAT_ram_4ff6df1c * 0x13,&iStack_54,0x13);
                DAT_ram_4ff6df18 = uVar7 + 1;
              }
              else {
                iVar8 = DAT_ram_4ff6df14 + 1;
                if (DAT_ram_4ff48b63 == '\0') {
                  fence();
                  DAT_ram_4ff6df04 = '\0';
                  fence();
                  DAT_ram_4ff6defa = DAT_ram_4ff6df18 != 0;
                  DAT_ram_4ff6df06 = 1;
                  DAT_ram_4ff6df08 = uVar6;
                  DAT_ram_4ff6df14 = iVar8;
                  goto LAB_ram_4802d76e;
                }
                iStack_54 = param_4;
                uStack_50 = uVar11;
                bStack_4c = bVar1;
                uStack_4b = uVar2;
                bStack_4a = bVar9;
                FUN_ram_4ff45158(DAT_ram_4ff6df24 + DAT_ram_4ff6df1c * 0x13,&iStack_54,0x13);
                DAT_ram_4ff6def9 = 1;
                DAT_ram_4ff6df14 = iVar8;
              }
              DAT_ram_4ff6df1c = (uVar4 + 1) % uVar5;
              if (iVar10 != -1) {
                if (param_2 == 0) {
                  (&DAT_ram_4ff5ce8c)[iVar10] = (&DAT_ram_4ff5ce8c)[iVar10] + 1;
                }
                else {
                  (&DAT_ram_4ff5ce80)[iVar10] = (&DAT_ram_4ff5ce80)[iVar10] + 1;
                }
              }
              if ((DAT_ram_4ff48b63 == '\0') && (uVar5 <= DAT_ram_4ff6df18)) {
                fence();
                DAT_ram_4ff6df04 = '\0';
                fence();
                DAT_ram_4ff6defa = 1;
                DAT_ram_4ff6df06 = 1;
                DAT_ram_4ff6df08 = uVar6;
              }
            }
          }
        }
LAB_ram_4802d76e:
        FUN_ram_4ff3ee10(&DAT_ram_4ff47ebc);
        return;
      }
    }
  }
  return;
}


