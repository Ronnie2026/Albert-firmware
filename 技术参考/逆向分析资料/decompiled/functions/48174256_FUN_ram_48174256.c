/* Firmware entry: 0x48174256 */

int FUN_ram_48174256(int *param_1,int param_2,byte *param_3,uint param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auStack_38 [16];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_4 != 0) {
    piVar1 = param_1 + 1;
    uVar2 = FUN_ram_48180076(piVar1);
    if (param_1[7] == 0) {
      return -0x4e80;
    }
    if (param_1[9] == 0) {
      if (param_4 != uVar2) {
        return -0x4f80;
      }
      iVar3 = FUN_ram_4818008e(param_2,param_3,param_4);
      if (iVar3 != 0) {
        return iVar3;
      }
      FUN_ram_4817fb90(param_2 + 8);
      if ((*param_1 == 9) && (iVar3 = FUN_ram_4817ffcc(param_2,param_4 * 8 + -1,0), iVar3 != 0)) {
        return iVar3;
      }
      iVar3 = FUN_ram_4817ff24(param_2 + 0x10,1);
      if (iVar3 != 0) {
        return iVar3;
      }
      if (param_1[7] == 0) {
        return 0;
      }
      if (param_1[9] == 0) {
        return 0;
      }
    }
    if (*param_3 == 0) {
      if (param_4 == 1) {
        iVar3 = FUN_ram_4817ff24(param_2,1);
        if (iVar3 != 0) {
          return iVar3;
        }
        iVar3 = FUN_ram_4817ff24(param_2 + 8,1);
        if (iVar3 == 0) {
          iVar3 = FUN_ram_4817ff24(param_2 + 0x10,0);
          return iVar3;
        }
        return iVar3;
      }
    }
    else {
      uVar6 = uVar2 + 1;
      if (uVar6 <= param_4) {
        iVar3 = FUN_ram_481800da(param_2,param_3 + 1,uVar2);
        if ((iVar3 != 0) || (iVar3 = FUN_ram_4817ff24(param_2 + 0x10,1), iVar3 != 0)) {
          return iVar3;
        }
        uVar5 = (uint)*param_3;
        if (uVar5 == 4) {
          if (uVar2 * 2 + 1 == param_4) {
            iVar3 = FUN_ram_481800da(param_2 + 8,param_3 + uVar6,uVar2);
            return iVar3;
          }
        }
        else if (((uVar5 - 2 & 0xff) < 2) && (uVar6 == param_4)) {
          iVar3 = FUN_ram_4817ffaa(piVar1,0);
          iVar4 = param_2 + 8;
          if ((iVar3 == 1) && (iVar3 = FUN_ram_4817ffaa(piVar1,1), iVar3 == 1)) {
            FUN_ram_4817fb86(auStack_38);
            iVar3 = FUN_ram_4817bf84(iVar4,param_2,param_2);
            if ((iVar3 == 0) && (iVar3 = FUN_ram_48172ae2(iVar4,param_1), iVar3 == 0)) {
              DAT_ram_4ff6e290 = DAT_ram_4ff6e290 + 1;
              iVar3 = FUN_ram_48172dea(param_1,iVar4,param_2);
              if ((iVar3 == 0) &&
                 ((((iVar3 = FUN_ram_4818059a(auStack_38,piVar1,1), iVar3 == 0 &&
                    (iVar3 = FUN_ram_4818019e(auStack_38,2), iVar3 == 0)) &&
                   (iVar3 = FUN_ram_4817bc22(iVar4,iVar4,auStack_38,piVar1,0), iVar3 == 0)) &&
                  (uVar2 = FUN_ram_4817ffaa(iVar4,0), (uVar5 & 1) != uVar2)))) {
                iVar3 = FUN_ram_48180594(iVar4,piVar1,iVar4);
              }
            }
            FUN_ram_4817fb90(auStack_38);
            return iVar3;
          }
          return -0x4e80;
        }
      }
    }
  }
  return -0x4f80;
}


