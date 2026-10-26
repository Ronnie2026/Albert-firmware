/* Firmware entry: 0x48129b06 */

void * FUN_ram_48129b06(char *param_1,uint param_2,undefined4 *param_3,int param_4)

{
  void *__s;
  undefined4 uVar1;
  int iVar3;
  char *pcStack_3c;
  uint uStack_38;
  uint uStack_34;
  undefined4 uStack_30;
  undefined *puStack_2c;
  undefined *puStack_28;
  undefined *puStack_24;
  char **ppcVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uStack_34 = 0;
  uStack_30 = 0;
  DAT_ram_4ff6e088 = (char *)0x0;
  DAT_ram_4ff6e08c = 0;
  if (param_1 == (char *)0x0) {
    DAT_ram_4ff6e088 = (char *)0x0;
    DAT_ram_4ff6e08c = 0;
    return (void *)0x0;
  }
  if (param_2 != 0) {
    puStack_2c = PTR_thunk_FUN_ram_4ff2070c_ram_4ff4b96c;
    puStack_28 = PTR_thunk_FUN_ram_4ff209c6_ram_4ff4b970;
    puStack_24 = PTR_thunk_FUN_ram_4ff20790_ram_4ff4b974;
    pcStack_3c = param_1;
    uStack_38 = param_2;
    __s = (void *)(*(code *)PTR_thunk_FUN_ram_4ff2070c_ram_4ff4b96c)(0x28);
    if (__s != (void *)0x0) {
      memset(__s,0,0x28);
      ppcVar2 = (char **)0x0;
      if (pcStack_3c != (char *)0x0) {
        if (uStack_34 == 0) {
          if ((((4 < uStack_38) && (*pcStack_3c == -0x11)) && (pcStack_3c[1] == -0x45)) &&
             (pcStack_3c[2] == -0x41)) {
            uStack_34 = 3;
          }
          ppcVar2 = &pcStack_3c;
        }
        else {
          ppcVar2 = (char **)0x0;
        }
      }
      uVar1 = FUN_ram_48129444(ppcVar2);
      iVar3 = FUN_ram_48129640(__s,uVar1);
      if (iVar3 == 0) goto LAB_ram_48129c0a;
      if (param_4 == 0) goto LAB_ram_48129bae;
      if (pcStack_3c == (char *)0x0) {
LAB_ram_48129bfc:
        if (uStack_34 < uStack_38) {
LAB_ram_48129c02:
          if (pcStack_3c[uStack_34] == '\0') {
LAB_ram_48129bae:
            if (param_3 != (undefined4 *)0x0) {
              *param_3 = pcStack_3c + uStack_34;
            }
            return __s;
          }
        }
      }
      else if (uStack_34 < uStack_38) {
        do {
          if (0x20 < (byte)pcStack_3c[uStack_34]) {
            if (uStack_34 != uStack_38) goto LAB_ram_48129bfc;
            break;
          }
          uStack_34 = uStack_34 + 1;
        } while (uStack_34 != uStack_38);
        uStack_34 = uStack_38 - 1;
        goto LAB_ram_48129c02;
      }
LAB_ram_48129c0a:
      FUN_ram_481295cc(__s);
    }
    if (uStack_34 < uStack_38) goto LAB_ram_48129c1a;
    if (uStack_38 != 0) {
      uStack_34 = uStack_38 - 1;
      goto LAB_ram_48129c1a;
    }
  }
  uStack_34 = 0;
LAB_ram_48129c1a:
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = param_1 + uStack_34;
  }
  DAT_ram_4ff6e088 = param_1;
  DAT_ram_4ff6e08c = uStack_34;
  return (void *)0x0;
}


