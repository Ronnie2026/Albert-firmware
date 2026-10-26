/* Firmware entry: 0x4817339e */

/* WARNING: Type propagation algorithm not settling */

void FUN_ram_4817339e(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  DAT_ram_4ff6e294 = DAT_ram_4ff6e294 + 1;
  iVar3 = param_4 + 8;
  if (*(int *)(param_1 + 0xc) == 0) {
    iVar1 = FUN_ram_4817bf84(iVar3,param_3 + 0x10);
    if (iVar1 != 0) {
      return;
    }
    iVar1 = FUN_ram_48172ae2(iVar3,param_1);
    if (iVar1 != 0) {
      return;
    }
    iVar2 = param_4 + 0x10;
    DAT_ram_4ff6e290 = DAT_ram_4ff6e290 + 1;
    iVar1 = FUN_ram_4818058e(iVar2,param_3,iVar3);
    if (iVar1 != 0) {
      return;
    }
    iVar1 = param_1 + 4;
    while (iVar4 = FUN_ram_4818023e(iVar2,iVar1), -1 < iVar4) {
      iVar4 = FUN_ram_481803f0(iVar2,iVar2,iVar1);
      if (iVar4 != 0) {
        return;
      }
    }
    iVar5 = param_4 + 0x18;
    iVar4 = FUN_ram_48180594(iVar5,param_3,iVar3);
    while( true ) {
      if (iVar4 != 0) {
        return;
      }
      if ((-1 < *(short *)(param_4 + 0x1c)) || (iVar4 = FUN_ram_481802e8(iVar5,0), iVar4 == 0))
      break;
      iVar4 = FUN_ram_4818058e(iVar5,iVar5,iVar1);
    }
    iVar2 = FUN_ram_4817bf84(iVar3,iVar2,iVar5);
    if (iVar2 != 0) {
      return;
    }
    iVar2 = FUN_ram_48172ae2(iVar3,param_1);
    if (iVar2 != 0) {
      return;
    }
    DAT_ram_4ff6e290 = DAT_ram_4ff6e290 + 1;
    iVar2 = FUN_ram_4817c1e8(param_4,iVar3,3);
    while( true ) {
      if (iVar2 != 0) {
        return;
      }
      iVar2 = FUN_ram_4818023e(param_4,iVar1);
      if (iVar2 < 0) break;
      iVar2 = FUN_ram_481803f0(param_4,param_4,iVar1);
    }
  }
  else {
    iVar1 = FUN_ram_4817bf84(iVar3,param_3);
    if (iVar1 != 0) {
      return;
    }
    iVar1 = FUN_ram_48172ae2(iVar3,param_1);
    if (iVar1 != 0) {
      return;
    }
    DAT_ram_4ff6e290 = DAT_ram_4ff6e290 + 1;
    iVar1 = FUN_ram_4817c1e8(param_4,iVar3,3);
    if (iVar1 != 0) {
      return;
    }
    iVar1 = param_1 + 4;
    while (iVar2 = FUN_ram_4818023e(param_4,iVar1), -1 < iVar2) {
      iVar2 = FUN_ram_481803f0(param_4,param_4,iVar1);
      if (iVar2 != 0) {
        return;
      }
    }
    iVar2 = FUN_ram_481802e8(param_1 + 0xc,0);
    if (iVar2 != 0) {
      iVar2 = FUN_ram_4817bf84(iVar3,param_3 + 0x10);
      if (iVar2 != 0) {
        return;
      }
      iVar2 = FUN_ram_48172ae2(iVar3,param_1);
      if (iVar2 != 0) {
        return;
      }
      iVar4 = param_4 + 0x10;
      DAT_ram_4ff6e290 = DAT_ram_4ff6e290 + 1;
      iVar2 = FUN_ram_4817bf84(iVar4,iVar3,iVar3);
      if (iVar2 != 0) {
        return;
      }
      iVar2 = FUN_ram_48172ae2(iVar4,param_1);
      if (iVar2 != 0) {
        return;
      }
      DAT_ram_4ff6e290 = DAT_ram_4ff6e290 + 1;
      iVar2 = FUN_ram_4817bf84(iVar3,iVar4,param_1 + 0xc);
      if (iVar2 != 0) {
        return;
      }
      iVar2 = FUN_ram_48172ae2(iVar3,param_1);
      if (iVar2 != 0) {
        return;
      }
      DAT_ram_4ff6e290 = DAT_ram_4ff6e290 + 1;
      iVar2 = FUN_ram_4818058e(param_4,param_4,iVar3);
      while( true ) {
        if (iVar2 != 0) {
          return;
        }
        iVar2 = FUN_ram_4818023e(param_4,iVar1);
        if (iVar2 < 0) break;
        iVar2 = FUN_ram_481803f0(param_4,param_4,iVar1);
      }
    }
  }
  iVar4 = param_4 + 0x10;
  iVar2 = param_1 + 4;
  iVar5 = param_3 + 8;
  iVar1 = FUN_ram_4817bf84(iVar4,iVar5,iVar5);
  if ((iVar1 == 0) && (iVar1 = FUN_ram_48172ae2(iVar4,param_1), iVar1 == 0)) {
    DAT_ram_4ff6e290 = DAT_ram_4ff6e290 + 1;
    iVar1 = FUN_ram_4818014a(iVar4);
    while (iVar1 == 0) {
      iVar1 = FUN_ram_4818023e(iVar4,iVar2);
      if (iVar1 < 0) {
        iVar1 = FUN_ram_4817bf84(iVar3,param_3,iVar4);
        if (iVar1 != 0) {
          return;
        }
        iVar1 = FUN_ram_48172ae2(iVar3,param_1);
        if (iVar1 != 0) {
          return;
        }
        DAT_ram_4ff6e290 = DAT_ram_4ff6e290 + 1;
        iVar1 = FUN_ram_4818014a(iVar3);
        while( true ) {
          if (iVar1 != 0) {
            return;
          }
          iVar1 = FUN_ram_4818023e(iVar3,iVar2);
          if (iVar1 < 0) break;
          iVar1 = FUN_ram_481803f0(iVar3,iVar3,iVar2);
        }
        iVar6 = param_4 + 0x18;
        iVar1 = FUN_ram_4817bf84(iVar6,iVar4,iVar4);
        if (iVar1 != 0) {
          return;
        }
        iVar1 = FUN_ram_48172ae2(iVar6,param_1);
        if (iVar1 != 0) {
          return;
        }
        DAT_ram_4ff6e290 = DAT_ram_4ff6e290 + 1;
        iVar1 = FUN_ram_4818014a(iVar6);
        if (iVar1 != 0) {
          return;
        }
        while (iVar1 = FUN_ram_4818023e(iVar6,iVar2), -1 < iVar1) {
          iVar1 = FUN_ram_481803f0(iVar6,iVar6,iVar2);
          if (iVar1 != 0) {
            return;
          }
        }
        iVar1 = FUN_ram_4817bf84(iVar4,param_4,param_4);
        if (iVar1 != 0) {
          return;
        }
        iVar1 = FUN_ram_48172ae2(iVar4,param_1);
        if (iVar1 != 0) {
          return;
        }
        DAT_ram_4ff6e290 = DAT_ram_4ff6e290 + 1;
        iVar1 = FUN_ram_48172c9a(param_1,iVar4,iVar4,iVar3);
        if (iVar1 != 0) {
          return;
        }
        iVar1 = FUN_ram_48172c9a(param_1,iVar4,iVar4,iVar3);
        if (iVar1 != 0) {
          return;
        }
        iVar1 = FUN_ram_48172c9a(param_1,iVar3,iVar3,iVar4);
        if (iVar1 != 0) {
          return;
        }
        iVar1 = FUN_ram_48172cf8(param_1,iVar3,iVar3,param_4);
        if (iVar1 != 0) {
          return;
        }
        iVar1 = FUN_ram_48172c9a(param_1,iVar3,iVar3,iVar6);
        if (iVar1 != 0) {
          return;
        }
        iVar1 = FUN_ram_48172cf8(param_1,iVar6,iVar5,param_3 + 0x10);
        if (iVar1 != 0) {
          return;
        }
        iVar1 = FUN_ram_48172d94(param_1,iVar6);
        if (iVar1 == 0) {
          iVar1 = FUN_ram_4817fe72(param_2,iVar4);
          if (iVar1 != 0) {
            return;
          }
          iVar3 = FUN_ram_4817fe72(param_2 + 8,iVar3);
          if (iVar3 == 0) {
            FUN_ram_4817fe72(param_2 + 0x10,iVar6);
            return;
          }
          return;
        }
        return;
      }
      iVar1 = FUN_ram_481803f0(iVar4,iVar4,iVar2);
    }
  }
  return;
}


