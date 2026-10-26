/* Firmware entry: 0x48041ed2 */

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_ram_48041ed2(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  short *psVar6;
  int *piVar7;
  undefined4 local_c0;
  int iStack_bc;
  int aiStack_b8 [3];
  undefined2 uStack_ac;
  byte bStack_a8;
  undefined1 uStack_a7;
  short local_a6 [30];
  short sStack_6a;
  char cStack_68;
  char cStack_67;
  char cStack_66;
  char cStack_65;
  char cStack_64;
  byte bStack_63;
  int local_62 [15];
  int aiStack_26 [4];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar3 = FUN_ram_4802feee();
  if (iVar3 != 0) {
    aiStack_b8[1] = 0;
    aiStack_b8[2] = 0;
    uStack_ac = 0;
    FUN_ram_4819ad74(aiStack_b8 + 1,10,"s%08lx",param_1);
    local_c0 = 0;
    DAT_ram_4ff6dd64 = FUN_ram_48159fd2("p4_data",param_2,0,&local_c0);
    if (DAT_ram_4ff6dd64 == 0x1102) {
      DAT_ram_4ff6dd64 = 0;
      return 0;
    }
    if (DAT_ram_4ff6dd64 == 0) {
      iStack_bc = 0;
      DAT_ram_4ff6dd64 = FUN_ram_4815a556(local_c0,aiStack_b8 + 1,0,&iStack_bc);
      iVar3 = iStack_bc;
      uVar2 = local_c0;
      if (DAT_ram_4ff6dd64 == 0x1102) {
        DAT_ram_4ff6dd64 = 0;
        FUN_ram_4815a050(local_c0);
        return 0;
      }
      if ((DAT_ram_4ff6dd64 == 0) && (iStack_bc == 0x46)) {
        memset(&cStack_68,0,0x46);
        aiStack_b8[0] = iVar3;
        DAT_ram_4ff6dd64 = FUN_ram_4815a556(uVar2,aiStack_b8 + 1,&cStack_68,aiStack_b8);
        FUN_ram_4815a050(local_c0);
        iVar3 = aiStack_26[0];
        if ((((DAT_ram_4ff6dd64 == 0) && (aiStack_b8[0] == iStack_bc)) && (aiStack_b8[0] == 0x46))
           && (((cStack_68 == 'S' && (cStack_67 == 'T')) && (cStack_66 == 'G')))) {
          if (((cStack_65 == 'T') && (cStack_64 == -1)) &&
             ((bStack_63 == 0xd3 && (iVar4 = FUN_ram_48041e96(&cStack_68,0x42), iVar3 == iVar4)))) {
            piVar7 = local_62;
            while (iVar3 = *piVar7, piVar7 = (int *)((int)piVar7 + 1), (char)iVar3 == '\0') {
              if (aiStack_26 == piVar7) {
                return 3;
              }
            }
          }
          if ((((cStack_65 == 'T') && ((byte)(cStack_64 - 1U) < 2)) && (bStack_63 < 2)) &&
             (iVar3 = FUN_ram_48041e96(&cStack_68,0x42), aiStack_26[0] == iVar3)) {
            FUN_ram_48041e5a(&bStack_a8);
            uStack_a7 = cStack_64 == '\x02';
            bStack_a8 = bStack_63 & 1;
            psVar5 = local_a6;
            piVar7 = local_62;
            psVar6 = psVar5;
            do {
              iVar3 = *piVar7;
              piVar7 = (int *)((int)piVar7 + 2);
              *psVar6 = (short)iVar3;
              psVar6 = psVar6 + 1;
            } while (piVar7 != aiStack_26);
            while (sVar1 = *psVar5, psVar5 = psVar5 + 1, (ushort)(sVar1 - 1U) < 0xff) {
              if (psVar5 == &sStack_6a) {
                FUN_ram_4ff45158(param_3,&bStack_a8,0x3e);
                return 1;
              }
            }
          }
        }
      }
      else {
        FUN_ram_4815a050(local_c0);
      }
    }
  }
  return 2;
}


