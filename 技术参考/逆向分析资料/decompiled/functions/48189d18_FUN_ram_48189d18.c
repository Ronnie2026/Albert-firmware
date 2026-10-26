/* Firmware entry: 0x48189d18 */

int FUN_ram_48189d18(int param_1,char *param_2,uint param_3)

{
  bool bVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
    iVar4 = -0x2800;
  }
  else if (param_2 == (char *)0x0) {
    iVar4 = -0x2800;
  }
  else {
    if (((param_3 == 0) || (param_2[param_3 - 1] != '\0')) ||
       (pcVar2 = strstr(param_2,"-----BEGIN CERTIFICATE-----"), pcVar2 == (char *)0x0)) {
      iVar4 = FUN_ram_4818931a(param_1,param_2,param_3,1,0,0);
      return iVar4;
    }
    if (param_3 != 1) {
      iVar5 = 0;
      iVar4 = 0;
      bVar1 = false;
      do {
        FUN_ram_48185548(&uStack_3c);
        iVar3 = FUN_ram_4818557a(&uStack_3c,"-----BEGIN CERTIFICATE-----",
                                 "-----END CERTIFICATE-----",param_2,0,0,&local_40);
        if (iVar3 == 0) {
          param_3 = param_3 - local_40;
          param_2 = param_2 + local_40;
          iVar3 = FUN_ram_4818931a(param_1,uStack_3c,uStack_38,1,0,0);
          FUN_ram_48185906(&uStack_3c);
          if (iVar3 == 0) {
            bVar1 = true;
          }
          else {
            if (iVar3 == -0x2880) {
              return -0x2880;
            }
            if (iVar4 != 0) {
              iVar3 = iVar4;
            }
            iVar5 = iVar5 + 1;
            iVar4 = iVar3;
          }
        }
        else {
          if (iVar3 == -0x1480) {
            return -0x1480;
          }
          if (iVar3 == -0x1080) break;
          FUN_ram_48185906(&uStack_3c);
          param_3 = param_3 - local_40;
          param_2 = param_2 + local_40;
          if (iVar4 == 0) {
            iVar4 = iVar3;
          }
          iVar5 = iVar5 + 1;
        }
      } while (1 < param_3);
      if (bVar1) {
        return iVar5;
      }
      if (iVar4 != 0) {
        return iVar4;
      }
    }
    iVar4 = -0x2780;
  }
  return iVar4;
}


