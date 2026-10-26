/* Firmware entry: 0x48007612 */

undefined4 FUN_ram_48007612(uint param_1,int param_2,ushort *param_3)

{
  undefined4 *puVar1;
  char cVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (4 < param_1) {
    puVar1 = (undefined4 *)FUN_ram_4819bf88();
    *puVar1 = 9;
    return 0xffffffff;
  }
  if (param_3 == (ushort *)0x0) {
    puVar1 = (undefined4 *)FUN_ram_4819bf88();
    *puVar1 = 0x16;
    return 0xffffffff;
  }
  if (param_2 == 1) {
    iVar5 = FUN_ram_4800b400(param_1,0xffffffff);
    if (iVar5 != 0) goto LAB_ram_48007638;
LAB_ram_4800765c:
    param_2 = FUN_ram_4800bb96(param_1);
  }
  else if (param_2 == 2) goto LAB_ram_4800765c;
  if (param_2 == 0) {
    iVar5 = 0;
    if ((*param_3 & 8) == 0) {
      iVar5 = ((*param_3 & 2) == 0) + 1;
    }
    uVar3 = param_3[2];
    *(int *)((&PTR_DAT_ram_4ff48158_ram_481e5190)[param_1] + 0x18) = iVar5;
    uVar3 = uVar3 & 3;
    if ((uVar3 != 2) && (uVar3 != 3)) {
      uVar3 = (ushort)(uVar3 == 1);
    }
    iVar5 = FUN_ram_48009460(param_1,uVar3);
    if ((iVar5 == 0) &&
       (iVar5 = FUN_ram_4800959e(param_1,(-(uint)((param_3[2] & 4) == 0) & 0xfffffffe) + 3),
       iVar5 == 0)) {
      cVar2 = '\0';
      if ((param_3[2] & 0x10) != 0) {
        cVar2 = ((param_3[2] & 0x20) != 0) + '\x02';
      }
      iVar5 = FUN_ram_4800970e(param_1,cVar2);
      if (iVar5 == 0) {
        if ((param_3[2] & 0x300) == 0) {
          return 0;
        }
        uVar4 = *(uint *)(param_3 + 10);
        if (uVar4 == *(uint *)(param_3 + 0xc)) {
          if ((param_3[2] & 0x400) == 0) {
            if (uVar4 == 0xf) {
              uVar4 = 0x9600;
            }
            else if (uVar4 < 0x10) {
              if (uVar4 == 7) {
                uVar4 = 300;
              }
              else if (uVar4 < 8) {
                if (uVar4 == 3) {
                  uVar4 = 0x6e;
                }
                else if (uVar4 < 4) {
                  if (uVar4 == 1) {
                    uVar4 = 0x32;
                  }
                  else if (uVar4 == 2) {
                    uVar4 = 0x4b;
                  }
                  else {
                    uVar4 = 0;
                  }
                }
                else if (uVar4 == 5) {
                  uVar4 = 0x96;
                }
                else if (uVar4 == 6) {
                  uVar4 = 200;
                }
                else {
                  uVar4 = 0x86;
                }
              }
              else if (uVar4 == 0xb) {
                uVar4 = 0x960;
              }
              else if (uVar4 < 0xc) {
                if (uVar4 == 9) {
                  uVar4 = 0x4b0;
                }
                else if (uVar4 == 10) {
                  uVar4 = 0x708;
                }
                else {
                  uVar4 = 600;
                }
              }
              else if (uVar4 == 0xd) {
                uVar4 = 0x2580;
              }
              else if (uVar4 == 0xe) {
                uVar4 = 0x4b00;
              }
              else {
                uVar4 = 0x12c0;
              }
            }
            else if (uVar4 == 0x17) {
              uVar4 = 1000000;
            }
            else if (uVar4 < 0x18) {
              if (uVar4 == 0x13) {
                uVar4 = 0x70800;
              }
              else if (uVar4 < 0x14) {
                if (uVar4 == 0x11) {
                  uVar4 = 0x1c200;
                }
                else if (uVar4 == 0x12) {
                  uVar4 = 0x38400;
                }
                else {
                  uVar4 = 0xe100;
                }
              }
              else if (uVar4 == 0x15) {
                uVar4 = 0x8ca00;
              }
              else if (uVar4 == 0x16) {
                uVar4 = 0xe1000;
              }
              else {
                uVar4 = 500000;
              }
            }
            else if (uVar4 == 0x1b) {
              uVar4 = 2500000;
            }
            else if (uVar4 < 0x1c) {
              if (uVar4 == 0x19) {
                uVar4 = 1500000;
              }
              else if (uVar4 == 0x1a) {
                uVar4 = 2000000;
              }
              else {
                uVar4 = 0x119400;
              }
            }
            else if (uVar4 == 0x1d) {
              uVar4 = 3500000;
            }
            else if (uVar4 == 0x1e) {
              uVar4 = 4000000;
            }
            else {
              if (uVar4 != 0x1c) goto LAB_ram_48007638;
              uVar4 = 3000000;
            }
          }
          iVar5 = FUN_ram_4800983e(param_1,uVar4);
          if (iVar5 == 0) {
            return 0;
          }
        }
      }
    }
  }
LAB_ram_48007638:
  puVar1 = (undefined4 *)FUN_ram_4819bf88();
  *puVar1 = 0x16;
  return 0xffffffff;
}


