/* Firmware entry: 0x481737ce */

int FUN_ram_481737ce(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  DAT_ram_4ff6e298 = DAT_ram_4ff6e298 + 1;
  if (*(int *)(param_4 + 0x10) == 0) {
    return -0x4f80;
  }
  iVar4 = param_3 + 0x10;
  iVar3 = param_2 + 8;
  iVar2 = param_2 + 0x10;
  iVar1 = FUN_ram_481802e8(iVar4,0);
  if (iVar1 == 0) {
    iVar1 = FUN_ram_4817fe72(param_2,param_4);
    if ((iVar1 != 0) || (iVar1 = FUN_ram_4817fe72(iVar3,param_4 + 8), iVar1 != 0)) {
      return iVar1;
    }
    iVar4 = param_4 + 0x10;
  }
  else {
    iVar1 = FUN_ram_481802e8(param_4 + 0x10,0);
    if (iVar1 != 0) {
      iVar1 = FUN_ram_481802e8(param_4 + 0x10,1);
      if (iVar1 != 0) {
        return -0x4f80;
      }
      iVar1 = FUN_ram_4817bf84(param_5,iVar4,iVar4);
      if (iVar1 != 0) {
        return iVar1;
      }
      iVar1 = FUN_ram_48172ae2(param_5,param_1);
      if (iVar1 != 0) {
        return iVar1;
      }
      iVar5 = param_5 + 8;
      DAT_ram_4ff6e290 = DAT_ram_4ff6e290 + 1;
      iVar1 = FUN_ram_4817bf84(iVar5,param_5,iVar4);
      if ((iVar1 == 0) && (iVar1 = FUN_ram_48172ae2(iVar5,param_1), iVar1 == 0)) {
        DAT_ram_4ff6e290 = DAT_ram_4ff6e290 + 1;
        iVar1 = FUN_ram_4817bf84(param_5,param_5,param_4);
        if ((iVar1 == 0) && (iVar1 = FUN_ram_48172ae2(param_5,param_1), iVar1 == 0)) {
          DAT_ram_4ff6e290 = DAT_ram_4ff6e290 + 1;
          iVar1 = FUN_ram_4817bf84(iVar5,iVar5,param_4 + 8);
          if ((iVar1 == 0) && (iVar1 = FUN_ram_48172ae2(iVar5,param_1), iVar1 == 0)) {
            DAT_ram_4ff6e290 = DAT_ram_4ff6e290 + 1;
            iVar1 = FUN_ram_48180594(param_5,param_5,param_3);
            while (iVar1 == 0) {
              if ((-1 < *(short *)(param_5 + 4)) ||
                 (iVar1 = FUN_ram_481802e8(param_5,0), iVar1 == 0)) {
                iVar1 = FUN_ram_48180594(iVar5,iVar5,param_3 + 8);
                while( true ) {
                  if (iVar1 != 0) {
                    return iVar1;
                  }
                  if ((-1 < *(short *)(param_5 + 0xc)) ||
                     (iVar1 = FUN_ram_481802e8(iVar5,0), iVar1 == 0)) break;
                  iVar1 = FUN_ram_4818058e(iVar5,iVar5,param_1 + 4);
                }
                iVar1 = FUN_ram_481802e8(param_5,0);
                if (iVar1 == 0) {
                  iVar1 = FUN_ram_481802e8(iVar5,0);
                  if (iVar1 == 0) {
                    iVar1 = FUN_ram_4817339e(param_1,param_2,param_3,param_5);
                    return iVar1;
                  }
                  iVar1 = FUN_ram_4817ff24(param_2,1);
                  if (iVar1 == 0) {
                    iVar1 = FUN_ram_4817ff24(iVar3,1);
                    if (iVar1 == 0) {
                      iVar1 = FUN_ram_4817ff24(iVar2,0);
                      return iVar1;
                    }
                    return iVar1;
                  }
                  return iVar1;
                }
                iVar1 = FUN_ram_4817bf84(iVar2,iVar4,param_5);
                if (iVar1 != 0) {
                  return iVar1;
                }
                iVar1 = FUN_ram_48172ae2(iVar2,param_1);
                if (iVar1 != 0) {
                  return iVar1;
                }
                iVar1 = param_5 + 0x10;
                DAT_ram_4ff6e290 = DAT_ram_4ff6e290 + 1;
                iVar4 = FUN_ram_4817bf84(iVar1,param_5,param_5);
                if (iVar4 != 0) {
                  return iVar4;
                }
                iVar4 = FUN_ram_48172ae2(iVar1,param_1);
                if (iVar4 != 0) {
                  return iVar4;
                }
                iVar2 = param_5 + 0x18;
                DAT_ram_4ff6e290 = DAT_ram_4ff6e290 + 1;
                iVar4 = FUN_ram_48172cf8(param_1,iVar2,iVar1,param_5);
                if (iVar4 != 0) {
                  return iVar4;
                }
                iVar4 = FUN_ram_48172cf8(param_1,iVar1,iVar1,param_3);
                if (iVar4 != 0) {
                  return iVar4;
                }
                iVar4 = FUN_ram_4817fe72(param_5,iVar1);
                if (iVar4 != 0) {
                  return iVar4;
                }
                iVar4 = FUN_ram_48172d94(param_1,param_5);
                if (iVar4 != 0) {
                  return iVar4;
                }
                iVar4 = FUN_ram_48172cf8(param_1,param_2,iVar5,iVar5);
                if (iVar4 != 0) {
                  return iVar4;
                }
                iVar4 = FUN_ram_48172c9a(param_1,param_2,param_2,param_5);
                if (iVar4 != 0) {
                  return iVar4;
                }
                iVar4 = FUN_ram_48172c9a(param_1,param_2,param_2,iVar2);
                if (iVar4 != 0) {
                  return iVar4;
                }
                iVar4 = FUN_ram_48172c9a(param_1,iVar1,iVar1,param_2);
                if (iVar4 != 0) {
                  return iVar4;
                }
                iVar4 = FUN_ram_48172cf8(param_1,iVar1,iVar1,iVar5);
                if (iVar4 != 0) {
                  return iVar4;
                }
                iVar4 = FUN_ram_48172cf8(param_1,iVar2,iVar2,param_3 + 8);
                if (iVar4 == 0) {
                  iVar1 = FUN_ram_48172c9a(param_1,iVar3,iVar1,iVar2);
                  return iVar1;
                }
                return iVar4;
              }
              iVar1 = FUN_ram_4818058e(param_5,param_5,param_1 + 4);
            }
          }
        }
      }
      return iVar1;
    }
    iVar1 = FUN_ram_4817fe72(param_2,param_3);
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar1 = FUN_ram_4817fe72(iVar3,param_3 + 8);
    if (iVar1 != 0) {
      return iVar1;
    }
  }
  iVar1 = FUN_ram_4817fe72(iVar2,iVar4);
  return iVar1;
}


