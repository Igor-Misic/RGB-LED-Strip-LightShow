This is code for Arduino. 
Electronic schema is here:

![](https://lh3.googleusercontent.com/C1MxVSIUHmNomI4mpiPm5t4Acia2oX49jUITd7sRp6tYAeDCBJ81coLwPRmwMKUdLrgNYgF-exoTow4wdFu5x6ljE6c1aYAFbHtQgnVKBTl6WWzCMNKu-XdjhWCsquhA9_xWxdB0ozjhDvDNizPVZ8KA9dnGBwu9jP3AweyIJ4n_tu2knJAfXdtKb1uxDJ77hvegbWhMWS6jtTQUd-8pAJS47eq6dkgdoU8TbwE2CT49LfSE-sGEtMK00TYa2DcpAFU4GBcN18X006T1p26LE20gx8pqC_GGZt4UmSfM1aDrBX55kawhtNJZ5_WxuZWJ3K0JmOeJ_YYheUZU-eAHITLuAv5t4-156LNDOwxZdj4rJrP-iEWsEPyF0skSM-GDHnGwwnErms0so3YPJdgC7F9AG0pdaniIjKbxNIVJa55WXJW42xyGt2FRpNBoOtIdZ9faDnb5DosGDF6d6Z1HPU2sK4U_KZYDvQpFVi-Ir2CPCXMn8SHJEyEC86IysFaI-M4sDPmGU7aMlgCmSVN3Y1K97Omx2K1DR2UTAE2zysR3ktU1gFPZt-Y21NimT3Lg_pDGZtiskHq3A66mpabNKqnQ8o_Vqj2jmJ8eenGFpEJUMbL7i-JSBciyx9yqeg03c-92zt8dC8_LRNGr2k3Z_oZ6p55Q-glesJMLffGhAYdmDKBSisybwZc=w883-h533-no)


lightshow in action:

[![](data:image/jpeg;base64,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)](https://www.youtube.com/watch?v=fRF_z4JCFXo)

